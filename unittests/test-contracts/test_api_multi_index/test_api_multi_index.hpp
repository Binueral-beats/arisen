/**
 *  @file
 *  @copyright defined in arisen/LICENSE
 */
#pragma once

#include <arisenio/arisenio.hpp>

class [[arisenio::contract]] test_api_multi_index : public arisenio::contract {
public:
   using arisenio::contract::contract;

   [[arisenio::action("s1g")]]
   void idx64_general();

   [[arisenio::action("s1store")]]
   void idx64_store_only();

   [[arisenio::action("s1check")]]
   void idx64_check_without_storing();

   [[arisenio::action("s1findfail1")]]
   void idx64_require_find_fail();

   [[arisenio::action("s1findfail2")]]
   void idx64_require_find_fail_with_msg();

   [[arisenio::action("s1findfail3")]]
   void idx64_require_find_sk_fail();

   [[arisenio::action("s1findfail4")]]
   void idx64_require_find_sk_fail_with_msg();

   [[arisenio::action("s1pkend")]]
   void idx64_pk_iterator_exceed_end();

   [[arisenio::action("s1skend")]]
   void idx64_sk_iterator_exceed_end();

   [[arisenio::action("s1pkbegin")]]
   void idx64_pk_iterator_exceed_begin();

   [[arisenio::action("s1skbegin")]]
   void idx64_sk_iterator_exceed_begin();

   [[arisenio::action("s1pkref")]]
   void idx64_pass_pk_ref_to_other_table();

   [[arisenio::action("s1skref")]]
   void idx64_pass_sk_ref_to_other_table();

   [[arisenio::action("s1pkitrto")]]
   void idx64_pass_pk_end_itr_to_iterator_to();

   [[arisenio::action("s1pkmodify")]]
   void idx64_pass_pk_end_itr_to_modify();

   [[arisenio::action("s1pkerase")]]
   void idx64_pass_pk_end_itr_to_erase();

   [[arisenio::action("s1skitrto")]]
   void idx64_pass_sk_end_itr_to_iterator_to();

   [[arisenio::action("s1skmodify")]]
   void idx64_pass_sk_end_itr_to_modify();

   [[arisenio::action("s1skerase")]]
   void idx64_pass_sk_end_itr_to_erase();

   [[arisenio::action("s1modpk")]]
   void idx64_modify_primary_key();

   [[arisenio::action("s1exhaustpk")]]
   void idx64_run_out_of_avl_pk();

   [[arisenio::action("s1skcache")]]
   void idx64_sk_cache_pk_lookup();

   [[arisenio::action("s1pkcache")]]
   void idx64_pk_cache_sk_lookup();

   [[arisenio::action("s2g")]]
   void idx128_general();

   [[arisenio::action("s2store")]]
   void idx128_store_only();

   [[arisenio::action("s2check")]]
   void idx128_check_without_storing();

   [[arisenio::action("s2autoinc")]]
   void idx128_autoincrement_test();

   [[arisenio::action("s2autoinc1")]]
   void idx128_autoincrement_test_part1();

   [[arisenio::action("s2autoinc2")]]
   void idx128_autoincrement_test_part2();

   [[arisenio::action("s3g")]]
   void idx256_general();

   [[arisenio::action("sdg")]]
   void idx_double_general();

   [[arisenio::action("sldg")]]
   void idx_long_double_general();

};
