//
//Test cases for split
//

#include "string.hpp"
#include <cassert>
#include <iostream>


int main(){
  
  {
    String str = "asd fg hjkl";
    std::vector<String> result;
    result = str.split(' ');
  }

  {
    String str = "-a--b--";
    std::vector<String> result;
    result = str.split('-');
  }

  {
    String str = "-a--b-";
    std::vector<String> result;
    result = str.split('-');
  }

  std::cout << "Done testing split" << std::endl;
}
