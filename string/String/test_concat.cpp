//
//Test case for string concatenation
//

#include "string.hpp"
#include <cassert>

int main() {
  
  { 
    //------------------------------------
    //Setup Fixture
    
    String str1, str2, result;
    result = str1 + str2;
    assert(str1 == "");
    assert(str2 == "");
    assert(result == "");
  }

  {
    String str1,str2('b'),result;
    result=str1+str2;
    assert(str1=="");
    assert(str2=="b");
    assert(result=="b");
  }

  {
    String str1('a'),result;
    result=str1+'b';
    assert(str1=="a");
    assert(result=="ab");
  }

  std::cout<< "Done testing concat" << std::endl;
}
