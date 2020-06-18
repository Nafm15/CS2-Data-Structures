//
//Test cases for substring
//

#include "string.hpp"
#include <cassert>
#include <iostream>

int main(){
  
  {
    String str1("Test");
    String result = str1.substr(0,2);
    assert(str1 == "Test");
    assert(result == "Tes");
  }

  std::cout<< "Done testing substr" <<std::endl;
}
