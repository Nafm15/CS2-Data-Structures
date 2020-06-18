//
//Test cases for subscript
//

#include "string.hpp"
#include <cassert>

int main() {
  
  {
    String str('a');
    assert(str[0]=='a');
  }
  
  {
    String str("Test ");
    assert(str[0]=='T');
    assert(str[1]=='e');
  }

  std::cout<< "Done testing subscript" <<std::endl;
}
