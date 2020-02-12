/**
 *  @file
 *  @copyright defined in rsn/LICENSE
 */
#pragma once
#include <fc/uint128.hpp>
#include <fc/array.hpp>

#include <arisen/chain/types.hpp>
#include <arisen/chain/block_timestamp.hpp>
#include <arisen/chain/chain_config.hpp>
#include <arisen/chain/producer_schedule.hpp>
#include <arisen/chain/incremental_merkle.hpp>
#include <chainbase/chainbase.hpp>
#include "multi_index_includes.hpp"

namespace arisen { namespace chain {

   /**
    * @class global_property_object
    * @brief Maintains global state information about block producer schedules and chain configuration parameters
    * @ingroup object
    * @ingroup implementation
    */
   class global_property_object : public chainbase::object<global_property_object_type, global_property_object>
   {
      OBJECT_CTOR(global_property_object, (proposed_schedule))

   public:
      id_type                        id;
      optional<block_num_type>       proposed_schedule_block_num;
      shared_producer_schedule_type  proposed_schedule;
      chain_config                   configuration;
   };


   using global_property_multi_index = chainbase::shared_multi_index_container<
      global_property_object,
      indexed_by<
         ordered_unique<tag<by_id>,
            BOOST_MULTI_INDEX_MEMBER(global_property_object, global_property_object::id_type, id)
         >
      >
   >;

   /**
    * @class dynamic_global_property_object
    * @brief Maintains global state information that frequently change
    * @ingroup object
    * @ingroup implementation
    */
   class dynamic_global_property_object : public chainbase::object<dynamic_global_property_object_type, dynamic_global_property_object>
   {
        OBJECT_CTOR(dynamic_global_property_object)

        id_type    id;
        uint64_t   global_action_sequence = 0;
   };

   using dynamic_global_property_multi_index = chainbase::shared_multi_index_container<
      dynamic_global_property_object,
      indexed_by<
         ordered_unique<tag<by_id>,
            BOOST_MULTI_INDEX_MEMBER(dynamic_global_property_object, dynamic_global_property_object::id_type, id)
         >
      >
   >;

}}

CHAINBASE_SET_INDEX_TYPE(arisen::chain::global_property_object, arisen::chain::global_property_multi_index)
CHAINBASE_SET_INDEX_TYPE(arisen::chain::dynamic_global_property_object,
                         arisen::chain::dynamic_global_property_multi_index)

FC_REFLECT(arisen::chain::global_property_object,
            (proposed_schedule_block_num)(proposed_schedule)(configuration)
          )

FC_REFLECT(arisen::chain::dynamic_global_property_object,
            (global_action_sequence)
          )
