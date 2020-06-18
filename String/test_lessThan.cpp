//
//Test cases for less than operator
//

#include "string.hpp"
#include <cassert>


int main(){
  
  {
    String str1, str2;
    assert(str1<=str2);
  }
  
  {
    String str1="a",str2="z";
    assert(str1<=str2);
  }

  {
    String str1="az",str2="z";
    assert(str1<=str2);
  }

  std::cout<< "Done testing less than." <<std::endl;
}
