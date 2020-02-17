/**
 *  @file
 *  @copyright defined in arisen/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>

class [[arisenio::contract]] asserter : public arisenio::contract {
public:
   using arisenio::contract::contract;

   [[arisenio::action]]
   void procassert( int8_t condition, std::string message );

   [[arisenio::action]]
   void provereset();
};
