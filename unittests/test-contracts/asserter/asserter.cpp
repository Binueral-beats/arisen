/**
 *  @file
 *  @copyright defined in arisen/LICENSE
 */
#include "asserter.hpp"

using namespace arisenio;

static int global_variable = 45;

void asserter::procassert( int8_t condition, std::string message ) {
   check( condition != 0, message );
}

void asserter::provereset() {
   check( global_variable == 45, "Global Variable Initialized poorly" );
   global_variable = 100;
}
