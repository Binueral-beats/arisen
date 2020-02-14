/**
 *  @file
 *  @copyright defined in rsn/LICENSE
 */
#pragma once

#include <arisenio/chain/types.hpp>
#include <arisenio/chain/contract_types.hpp>

namespace arisenio { namespace chain {

   class apply_context;

   /**
    * @defgroup native_action_handlers Native Action Handlers
    */
   ///@{
   void apply_arisenio_newaccount(apply_context&);
   void apply_arisenio_updateauth(apply_context&);
   void apply_arisenio_deleteauth(apply_context&);
   void apply_arisenio_linkauth(apply_context&);
   void apply_arisenio_unlinkauth(apply_context&);

   /*
   void apply_arisenio_postrecovery(apply_context&);
   void apply_arisenio_passrecovery(apply_context&);
   void apply_arisenio_vetorecovery(apply_context&);
   */

   void apply_arisenio_setcode(apply_context&);
   void apply_arisenio_setabi(apply_context&);

   void apply_arisenio_canceldelay(apply_context&);
   ///@}  end action handlers

} } /// namespace arisenio::chain
