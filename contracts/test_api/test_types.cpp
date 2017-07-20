#include <eoslib/types.hpp>

#include "test_api.hpp"
#include "test_types.hpp"

#include <eoslib/eos.hpp>

unsigned int test_types::test1() {
   
   WASM_ASSERT( sizeof(int64_t) == 8, "int64_t size != 8");
   WASM_ASSERT( sizeof(uint64_t) ==  8, "uint64_t size != 8");
   WASM_ASSERT( sizeof(uint32_t) ==  4, "uint32_t size != 4");
   WASM_ASSERT( sizeof(int32_t) ==  4, "int32_t size != 4");
   WASM_ASSERT( sizeof(uint128_t) == 16, "uint128_t size != 16");
   WASM_ASSERT( sizeof(int128_t) == 16, "int128_t size != 16");
   WASM_ASSERT( sizeof(uint8_t) ==  1, "uint8_t size != 1");
   
   WASM_ASSERT( sizeof(AccountName) ==  8, "AccountName size !=  8");
   WASM_ASSERT( sizeof(TokenName) ==  8, "TokenName size !=  8");
   WASM_ASSERT( sizeof(TableName) ==  8, "TableName size !=  8");
   WASM_ASSERT( sizeof(Time) ==  4, "Time size !=  4");

   return WASM_TEST_PASS;
}

unsigned int test_types::test2() {
   
   WASM_ASSERT( eos::char_to_symbol('a') ==  1, "eos::char_to_symbol('a') !=  1");
   WASM_ASSERT( eos::char_to_symbol('b') ==  2, "eos::char_to_symbol('b') !=  2");
   WASM_ASSERT( eos::char_to_symbol('c') ==  3, "eos::char_to_symbol('c') !=  3");
   WASM_ASSERT( eos::char_to_symbol('d') ==  4, "eos::char_to_symbol('d') !=  4");
   WASM_ASSERT( eos::char_to_symbol('e') ==  5, "eos::char_to_symbol('e') !=  5");
   WASM_ASSERT( eos::char_to_symbol('f') ==  6, "eos::char_to_symbol('f') !=  6");
   WASM_ASSERT( eos::char_to_symbol('g') ==  7, "eos::char_to_symbol('g') !=  7");
   WASM_ASSERT( eos::char_to_symbol('h') ==  8, "eos::char_to_symbol('h') !=  8");
   WASM_ASSERT( eos::char_to_symbol('i') ==  9, "eos::char_to_symbol('i') !=  9");
   WASM_ASSERT( eos::char_to_symbol('j') == 10, "eos::char_to_symbol('j') != 10");
   WASM_ASSERT( eos::char_to_symbol('k') == 11, "eos::char_to_symbol('k') != 11");
   WASM_ASSERT( eos::char_to_symbol('l') == 12, "eos::char_to_symbol('l') != 12");
   WASM_ASSERT( eos::char_to_symbol('m') == 13, "eos::char_to_symbol('m') != 13");
   WASM_ASSERT( eos::char_to_symbol('n') == 14, "eos::char_to_symbol('n') != 14");
   WASM_ASSERT( eos::char_to_symbol('o') == 15, "eos::char_to_symbol('o') != 15");
   WASM_ASSERT( eos::char_to_symbol('p') == 16, "eos::char_to_symbol('p') != 16");
   WASM_ASSERT( eos::char_to_symbol('q') == 17, "eos::char_to_symbol('q') != 17");
   WASM_ASSERT( eos::char_to_symbol('r') == 18, "eos::char_to_symbol('r') != 18");
   WASM_ASSERT( eos::char_to_symbol('s') == 19, "eos::char_to_symbol('s') != 19");
   WASM_ASSERT( eos::char_to_symbol('t') == 20, "eos::char_to_symbol('t') != 20");
   WASM_ASSERT( eos::char_to_symbol('u') == 21, "eos::char_to_symbol('u') != 21");
   WASM_ASSERT( eos::char_to_symbol('v') == 22, "eos::char_to_symbol('v') != 22");
   WASM_ASSERT( eos::char_to_symbol('w') == 23, "eos::char_to_symbol('w') != 23");
   WASM_ASSERT( eos::char_to_symbol('x') == 24, "eos::char_to_symbol('x') != 24");
   WASM_ASSERT( eos::char_to_symbol('y') == 25, "eos::char_to_symbol('y') != 25");
   WASM_ASSERT( eos::char_to_symbol('z') == 26, "eos::char_to_symbol('z') != 26");
   WASM_ASSERT( eos::char_to_symbol('1') == 27, "eos::char_to_symbol('1') != 27");
   WASM_ASSERT( eos::char_to_symbol('2') == 28, "eos::char_to_symbol('2') != 28");
   WASM_ASSERT( eos::char_to_symbol('3') == 29, "eos::char_to_symbol('3') != 29");
   WASM_ASSERT( eos::char_to_symbol('4') == 30, "eos::char_to_symbol('4') != 30");
   WASM_ASSERT( eos::char_to_symbol('5') == 31, "eos::char_to_symbol('5') != 31");
 
   for(unsigned char i = 0; i<255; i++) {
      if((i >= 'a' && i <= 'z') || (i >= '1' || i <= '5')) continue;
      WASM_ASSERT( eos::char_to_symbol(i) == 0, "eos::char_to_symbol() != 0");
   }

   return WASM_TEST_PASS;  
}

unsigned int test_types::test3() {

   WASM_ASSERT( eos::string_to_name("a") == N(a) , "eos::string_to_name(a)" );
   WASM_ASSERT( eos::string_to_name("ba") == N(ba) , "eos::string_to_name(ba)" );
   WASM_ASSERT( eos::string_to_name("cba") == N(cba) , "eos::string_to_name(cba)" );
   WASM_ASSERT( eos::string_to_name("dcba") == N(dcba) , "eos::string_to_name(dcba)" );
   WASM_ASSERT( eos::string_to_name("edcba") == N(edcba) , "eos::string_to_name(edcba)" );
   WASM_ASSERT( eos::string_to_name("fedcba") == N(fedcba) , "eos::string_to_name(fedcba)" );
   WASM_ASSERT( eos::string_to_name("gfedcba") == N(gfedcba) , "eos::string_to_name(gfedcba)" );
   WASM_ASSERT( eos::string_to_name("hgfedcba") == N(hgfedcba) , "eos::string_to_name(hgfedcba)" );
   WASM_ASSERT( eos::string_to_name("ihgfedcba") == N(ihgfedcba) , "eos::string_to_name(ihgfedcba)" );
   WASM_ASSERT( eos::string_to_name("jihgfedcba") == N(jihgfedcba) , "eos::string_to_name(jihgfedcba)" );
   WASM_ASSERT( eos::string_to_name("kjihgfedcba") == N(kjihgfedcba) , "eos::string_to_name(kjihgfedcba)" );
   WASM_ASSERT( eos::string_to_name("lkjihgfedcba") == N(lkjihgfedcba) , "eos::string_to_name(lkjihgfedcba)" );
   WASM_ASSERT( eos::string_to_name("mlkjihgfedcba") == N(mlkjihgfedcba) , "eos::string_to_name(mlkjihgfedcba)" );
   WASM_ASSERT( eos::string_to_name("1mlkjihgfedcba") == N(2mlkjihgfedcba) , "eos::string_to_name(2mlkjihgfedcba)" );
   WASM_ASSERT( eos::string_to_name("55mlkjihgfedcba") == N(14mlkjihgfedcba) , "eos::string_to_name(14mlkjihgfedcba)" );
   
   WASM_ASSERT( eos::string_to_name("azAA34") == N(azBB34) , "eos::string_to_name N(azBB34)" );
   WASM_ASSERT( eos::string_to_name("AZaz12Bc34") == N(AZaz12Bc34) , "eos::string_to_name AZaz12Bc34" );
   WASM_ASSERT( eos::string_to_name("AAAAAAAAAAAAAAA") == eos::string_to_name("BBBBBBBBBBBBBDDDDDFFFGG") , "eos::string_to_name BBBBBBBBBBBBBDDDDDFFFGG" );
   
   return WASM_TEST_PASS;
}

unsigned int test_types::test4() {

   WASM_ASSERT ( eos::Name(eos::string_to_name("azAA34")).value == N(azAA34), "eos::Name != N(azAA34)" );
   WASM_ASSERT ( eos::Name(eos::string_to_name("AABBCC")).value == 0, "eos::Name != N(0)" );
   WASM_ASSERT ( eos::Name(eos::string_to_name("AA11")).value == N(11)<<(5*2), "eos::Name != N(AA11)" );
   WASM_ASSERT ( eos::Name(eos::string_to_name("11AA")).value == N(11), "eos::Name != N(11AA)" );
   WASM_ASSERT ( eos::Name(eos::string_to_name("22BBCCXXAA")).value == N(22), "eos::Name != N(22)" );
   WASM_ASSERT ( eos::Name(eos::string_to_name("AAAbbcccdd")) == eos::Name(eos::string_to_name("AAAbbcccdd")), "eos::Name == eos::Name" );

   uint64_t tmp = eos::Name(eos::string_to_name("11bbcccdd"));
   WASM_ASSERT(N(11bbcccdd) == tmp, "N(11bbcccdd) == tmp");

   return WASM_TEST_PASS;  
}