//  (C) Copyright Gennadiy Rozental 2005.
//  Use, modification, and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/test for the library home page.
//
//  File        : $RCSfile$
//
//  Version     : $Revision$
//
//  Description : 
// ***************************************************************************

#ifndef BOOST_TEST_INTERACTION_BASED_IPP_112105GER
#define BOOST_TEST_INTERACTION_BASED_IPP_112105GER

// Boost.Test
#include <boost/test/detail/config.hpp>
#include <boost/test/utils/callback.hpp>
#include <boost/test/interaction_based.hpp>
#include <boost/test/mock_object.hpp>

#include <boost/test/detail/suppress_warnings.hpp>

// STL
#include <stdexcept>
#include <string>

//____________________________________________________________________________//

namespace boost {

namespace itest { // interaction-based testing

// ************************************************************************** //
// **************                    manager                   ************** //
// ************************************************************************** //

manager::manager()
{
    instance_ptr( true, this );
}

//____________________________________________________________________________//

manager::~manager()
{
    instance_ptr( true );
}

//____________________________________________________________________________//
    
manager*
manager::instance_ptr( bool reset, manager* new_ptr )
{
    static manager dummy( 0 );
    
    static manager* ptr = &dummy;
    
    if( reset ) {
        if( new_ptr ) {
            if( ptr != &dummy )
                throw std::logic_error( std::string( "Couldn't run two interation based test the same time" ) );
                
            ptr = new_ptr;
        }
        else
            ptr = &dummy;
    }
    
    return ptr;
}
    
}  // namespace itest

}  // namespace boost

//____________________________________________________________________________//

#include <boost/test/detail/enable_warnings.hpp>

// ***************************************************************************
//  Revision History :
//
//  $Log$
//  Revision 1.4  2006/01/28 08:52:35  rogeeff
//  operator new overloads made inline to:
//  1. prevent issues with export them from DLL
//  2. release link issue fixed
//
//  Revision 1.3  2006/01/15 11:14:39  rogeeff
//  simpl_mock -> mock_object<>::prototype()
//  operator new need to be rethinked
//
//  Revision 1.2  2005/12/22 15:49:32  rogeeff
//  sunpro port
//  made operator new conformant
//
//  Revision 1.1  2005/12/14 05:56:56  rogeeff
//  Interraction based / logged expectation testing is introduced
//
// ***************************************************************************

#endif // BOOST_TEST_INTERACTION_BASED_IPP_112105GER
