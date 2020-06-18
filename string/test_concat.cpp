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
    result = str1+str2;
    assert(str1=='\0');
    assert(str2=='\0');
    assert(result=="\0");
  }

  {
    String str1,str2('b'),result;
    result=str1+str2;
    assert(str1=="\0");
    assert(str2=="b");
    assert(result=="b");
  }

  {
    String str1('a'),str2('b'),result;
    result=str1+str2;
    assert(str1=="a");
    assert(str2 == "b");
    assert(result=="ab");
  }

  std::cout<< "Done testing concat" << std::endl;
}
