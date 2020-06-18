//
//Test cases for length and capacity
//

#include "string.hpp"
#include <cassert>

int main(){
  
  {
    String str("abc");
    int result = str.length();
    assert(str == "abc");
    assert(result == 3);
  }

  {
    String str('a');
    int result = str.length();
    assert(str == 'a');
    assert(result == 1);
  }

  {
    String str;
    int result = str.length();
    assert(str == "");
    assert(result == 0);
  }

  std::cout<< "Done testing length()." <<std::endl;

  
  {
    String str;
    int result = str.capacity();
    assert(str=="");
    assert(result == 0);
  }

  {
    String str('a');
    int result = str.capacity();
    assert(str == "a");
    assert(result == 1);
  }

  {
    String str("abc");
    int result = str.capacity();
    assert(str == "abc");
    assert(result == 3);
  }

  std::cout<< "Done with capacity()." << std::endl;
  
}
