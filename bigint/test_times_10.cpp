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
        bi = bi.times10(1);

        // Verify
        assert(bi == 30);
    }
    
    {
      //--------------------------------------------------------
      //Setup fixture

      bigint bi(23);
    
      //Test
      bi = bi.times10(1);

      //Verify
      assert(bi == 230);
    }
    
    {
      //-------------------------------------------------------
      //Setup fixture

      bigint bi(235);

      //Test
      bi = bi.times10(5);

      //Verify
      assert(bi == 23500000);
      
    }

    {
      //----------------------------------------------------
      //Setup fixture
      
      bigint bi(3);
      
      //Test
      bi = bi.times10(0);

      //verify
      assert(bi == 3);
    }



    std::cout << "Done testing times_10" << std::endl;
}

