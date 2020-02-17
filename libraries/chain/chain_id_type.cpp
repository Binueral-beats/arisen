/**
 *  @file
 *  @copyright defined in arisen/LICENSE
 */

#include <arisenio/chain/chain_id_type.hpp>
#include <arisenio/chain/exceptions.hpp>

namespace arisenio { namespace chain {

   void chain_id_type::reflector_init()const {
      RSN_ASSERT( *reinterpret_cast<const fc::sha256*>(this) != fc::sha256(), chain_id_type_exception, "chain_id_type cannot be zero" );
   }

} }  // namespace arisenio::chain

namespace fc {

   void to_variant(const arisenio::chain::chain_id_type& cid, fc::variant& v) {
      to_variant( static_cast<const fc::sha256&>(cid), v);
   }

   void from_variant(const fc::variant& v, arisenio::chain::chain_id_type& cid) {
      from_variant( v, static_cast<fc::sha256&>(cid) );
   }

} // fc
