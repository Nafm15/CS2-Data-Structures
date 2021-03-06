//
//Test for char array constructor
//

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {
  

  {
    String str("a");
    assert(str[0] == 'a');
    assert(str[1] == '\0');
  }

  {
    String str("abc");
    assert(str[0] == 'a');
    assert(str[1] == 'b');
    assert(str[2] == 'c');
    assert(str[3] == '\0');
  }

  std::cout<<"Done testing char array constructor." <<std::endl;
}
