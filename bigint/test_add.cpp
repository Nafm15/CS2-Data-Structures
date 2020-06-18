// bigint Test Program
//
// Tests:  int constructor, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

    
    //Add test cases as needed.
	
 {
	//----------------------------------------------------
	//Setup fixture
	bigint	left(2);
	bigint	right(1);
	bigint	result;

	//Test
	result = left + right;
	
	//Verify
	assert(left == 2);
	assert(right == 1);
	assert(result == 3);

 }

 {
	//------------------------------------------------------	
	//Setup fixture
	bigint left(2);
	bigint right(2);
	bigint result;

	//Test
	result = left + right;

	//Verify
	assert(left == 2);
	assert(right == 2);
	assert(result == 4);
 }

 {
	//Setup fixture
	bigint left(50);
	bigint right(20);
	bigint result;
	
	//Test
	result = left +right;

	//Verify
	assert(left == 50);
	assert(right == 20);
	assert(result == 70);
 }

 {
	//-------------------------------------------------------
	//Setupf fixture
	bigint left(120);
	bigint right(30);
	bigint result;

	//Test
	result = left + right;

	//Verify
	assert(left == 120);
	assert(right == 30);
	assert(result == 150);
 }
 
 {
	//-------------------------------------------------------
	//Setup fixture
	bigint left(20);
	bigint right(50);
	bigint result(70);
	
	//Test
	result = left + right;

	//Verify
	assert(left == 20);
	assert(right == 50);
	assert(result == 70);
 }

 {
	//Setup fixture
	bigint left(50000);
	bigint right(70000);
	bigint result;
	
	//Test
	result = left + right;

	//Verify
	assert(left == 50000);
	assert(right == 70000);
	assert(result == 120000);
 }
    
 {
	//--------------------------------------------------------
	//Setup fixture
	bigint left(254574);
	bigint right(245475);
	bigint result;

	//Test
	result = left + right;
	
	//Verify
	assert(left == 254574);
	assert(right == 245475);
	assert(result == 500049);
 }

 {	//Setup fixture
	bigint left("234569872");
	bigint right("2567835297");
	bigint result;

	//Test
	result = left + right;

	//Verify
	assert(left == "234569872");
	assert(right == "2567835297");
	assert(result == "2802405169");
 }
	
    std::cout << "Done with testing addition." << std::endl;
}

