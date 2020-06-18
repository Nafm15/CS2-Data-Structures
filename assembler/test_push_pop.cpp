//
//Test case for push and pop methods
//

#include "stack.hpp"
#include "../string/string.hpp"

int main(){
  
  {
    stack<int>integer_stack;

    integer_stack.push(1);
    integer_stack.push(2);
    integer_stack.push(3);

    int first = integer_stack.pop();
    int second = integer_stack.pop();
    int third = integer_stack.pop();

    assert(first == 3);
    assert(second == 2);
    assert(third == 1);
  }
  
  {
    stack<double> double_stack;

    double_stack.push(1.1);
    double_stack.push(2.2);
    double_stack.push(3.3);

    double first = double_stack.pop();
    double second = double_stack.pop();
    double third = double_stack.pop();

    assert(first == 3.3);
    assert(second == 2.2);
    assert(third == 1.1);
  }

  {
    stack<String> str_stack;

    str_stack.push("first");
    str_stack.push("second");
    str_stack.push("third");

    String s1 = str_stack.pop();
    String s2 = str_stack.pop();
    String s3 = str_stack.pop();

    assert(s1 == "third");
    assert(s2 == "second");
    assert(s3 == "first");
  }

  std::cout<< "Done testing push() and pop() methods." <<std::endl;
}
