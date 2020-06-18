//
//Test case for destructor
//

#include "stack.hpp"
#include "../string/string.hpp"

int main(){
  
  {
    int *temp=nullptr;
    delete temp;
  }

  {
    double *temp=nullptr;
    delete temp;
  }

  {
    String *temp=nullptr;
    delete temp;
  }

  std::cout<< "Done testing destructor." <<std::endl;
}
