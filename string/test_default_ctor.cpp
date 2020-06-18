//
//Default constructor test case
//

#include "string.hpp"
#include <iostream>
#include <cassert>

int main() {
  {
    String str;
    assert(str[0] == 0);
  }
  std::cout << "Done testing default constructor." << std::endl;
  return 0;

}
