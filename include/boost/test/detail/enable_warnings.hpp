//  (C) Copyright Gennadiy Rozental 2004.
//  Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file LICENSE_1_0.txt or copy at 
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/test for the library home page.
//
//  File        : $RCSfile$
//
//  Version     : $Revision$
//
//  Description : enable previosly suppressed warnings
// ***************************************************************************

#ifdef BOOST_MSVC
# pragma warning(default: 4511) // copy constructor could not be generated
# pragma warning(default: 4512) // assignment operator could not be generated
# pragma warning(default: 4100) // unreferenced formal parameter 
# pragma warning(default: 4996) // <symbol> was declared deprecated 
# pragma warning(pop)
#endif

// ***************************************************************************
//  Revision History :
//  
//  $Log$
//  Revision 1.2  2005/01/31 06:00:37  rogeeff
//  deprecated std symbols warning suppressed
//
//  Revision 1.1  2004/07/19 12:21:44  rogeeff
//  suppress warnings shared
//
// ***************************************************************************
