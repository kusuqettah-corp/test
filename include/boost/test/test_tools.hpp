//  (C) Copyright Gennadiy Rozental 2001-2014.
//  Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/test for the library home page.
//
/// @file
/// @brief test tools compatibility header
///
/// This file is used to select the test tools implementation and includes all the necessary headers
// ***************************************************************************

#ifndef BOOST_TEST_TOOLS_HPP_111812GER
#define BOOST_TEST_TOOLS_HPP_111812GER

#include <boost/preprocessor/config/config.hpp>

// Boost.Test
//#define BOOST_TEST_NO_OLD_TOOLS

#if !BOOST_PP_VARIADICS
#  define BOOST_TEST_NO_NEW_TOOLS
#endif

// #define BOOST_TEST_TOOLS_UNDER_DEBUGGER
// #define BOOST_TEST_TOOLS_DEBUGGABLE

#include <boost/test/tools/context.hpp>

#ifndef BOOST_TEST_NO_OLD_TOOLS
#  include <boost/test/tools/old/interface.hpp>
#  include <boost/test/tools/old/impl.hpp>

#  include <boost/test/tools/detail/print_helper.hpp>
#endif

#ifndef BOOST_TEST_NO_NEW_TOOLS
#  include <boost/test/tools/interface.hpp>
#  include <boost/test/tools/assertion.hpp>

#  include <boost/test/tools/detail/fwd.hpp>
#  include <boost/test/tools/detail/print_helper.hpp>
#  include <boost/test/tools/detail/it_pair.hpp>

#  include <boost/test/tools/detail/bitwise_manip.hpp>
#  include <boost/test/tools/detail/tolerance_manip.hpp>
#endif

#if !BOOST_PP_VARIADICS || ((__cplusplus >= 201103L) && BOOST_NO_CXX11_VARIADIC_MACROS)
#define BOOST_TEST_NO_VARIADIC
#endif

#endif // BOOST_TEST_TOOLS_HPP_111812GER
