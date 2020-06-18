// bigint Test Program
//
// Tests:  times_10, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);
    }


    {
      //--------------------------------------------------------
      //Setup fixture
      bigint bi(4);

      //Test
      bi = bi.timesDigit(2);
      
      //Verify
      assert(bi == 8);

    }


    {
      //-------------------------------------------------------
      //Setup fixture
      bigint bi(5);
      
      //Test
      bi = bi.timesDigit(8);

      //Verify
      assert(bi == 40);
    }


    
    std::cout << "Done testing bigint * digit" << std::endl;

}
