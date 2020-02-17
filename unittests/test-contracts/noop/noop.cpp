/**
 *  @file
 *  @copyright defined in arisen/LICENSE
 */
#include "noop.hpp"

using namespace arisenio;

void noop::anyaction( name                       from,
                      const ignore<std::string>& type,
                      const ignore<std::string>& data )
{
   require_auth( from );
}
