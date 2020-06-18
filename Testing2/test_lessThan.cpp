#include <iostream>
#include "string.hpp"

int main (){

  {
    String str1("");
    String str2("a");
    String str3("b");
    String str4("");
    String str5("a a");
    String str6("bb");
    String str7("ab");



    assert(!(str1 < str1));
    assert(str1 < str2);
    assert(str2 < str3);
    assert(!(str2 < str2));
    assert(!(str3 < str2));
    assert(str4 < str2);
    assert(str4 < str5);
    assert(!(str4 < str4));
    assert(str4 < str6);
    assert(str4 < str7);
    


  }
  return 0;
}
