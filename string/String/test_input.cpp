//
//Test cases for assignment operator
//

#include "string.hpp"
#include <cassert>

int main(){

  {
    String a("abc");
    String b;
    b = a;
    assert(a == "abc");
    assert(b == "abc");
  }

  {
    String a("abc");
    String b;
    b = a;
    assert(a == "abc");
    assert(b == "def");
  }

  {
    String a("abcccc");
    String b;
    b = a;
    assert(a == "abcccc");
    assert(b == "abcccc");
  }

  {
    String a;
    String b("abc");
    b = a; 
    assert(a == "");
    assert(b == "");
  }

  std::cout<< "Done testing assignment operator" <<std::endl;
}
