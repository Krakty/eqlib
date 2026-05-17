/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

namespace eqlib {
	
//
// Size Checks
//

#define SIZE_CHECKS_ENABLED 1

namespace detail{
	template <typename T>
	struct check_size_t {
		enum { value = sizeof(T) };
	};
	template <>
	struct check_size_t<void> {
		enum { value = 1 };
	};

	template <typename T>
	struct is_size_ok
	{
		enum { value = ((std::is_reference_v<T> || std::is_pointer_v<T> || std::is_void_v<T>) ? 8 : !std::is_trivial_v<T> ? 12 : check_size_t<T>::value) <= 8 ? 1 : 0 };
	};
} // namespace eqlib::detail

#if defined(COMMENT_UPDATER) || SIZE_CHECKS_ENABLED == 0
#define SIZE_CHECK(type, expectedSize)
#define SIZE_CHECK2(name, type, expectedSize)
#else
// Bare static_assert: fires unconditionally at compile time in every TU
// that sees the macro. Previous template-helper form was inline + never
// ODR-used, so MSVC never instantiated it and the assert never fired.
// Trailing semicolon is baked in so existing call sites (which omit it,
// since the old macro body ended with `}`) keep working.
#define SIZE_CHECK(type, expectedSize) \
	static_assert(sizeof(type) == (expectedSize), "Size of " #type " does not match expected size.");
#define SIZE_CHECK2(name, type, expectedSize) \
	static_assert(sizeof(type) == (expectedSize), "Size of " #type " does not match expected size.");
#endif

} // namespace eqlib
