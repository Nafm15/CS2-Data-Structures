//
//string constructor test case
//

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {
  {
    String str('a');
    assert(str=="a");
  }

  {
    String str('b');
    assert(str=="b");
  }

  std::cout << "Done testing string constructor" << std::endl;

}
