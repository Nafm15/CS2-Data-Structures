//
//Test case for assignment constructor
//

#include "stack.hpp"
#include "../string/string.hpp"

int main(){
  
  {
    stack<int> integer_stack;
    integer_stack.push(1);
    integer_stack.push(2);
    integer_stack.push(3);

    stack<int> result;
    result = integer_stack;

    int third = result.pop();
    int second = result.pop();
    int first = result.pop();

    assert(first == 1);
    assert(second == 2);
    assert(third == 3);
  }

  {
    stack<double> double_stack;
    double_stack.push(1.1);
    double_stack.push(2.2);
    double_stack.push(3.3);

    stack<double> result;
    result = double_stack;

    double first = result.pop();
    double second = result.pop();
    double third = result.pop();

    assert(first == 3.3);
    assert(second == 2.2);
    assert(third == 1.1);
  }

  {
    stack<String> string_stack;
    string_stack.push("abc");
    string_stack.push("def");
    string_stack.push("ghi");

    stack<String> result;
    result = string_stack;

    String first = result.pop();
    String second = result.pop();
    String third = result.pop();

    assert(first == "ghi");
    assert(second == "def");
    assert(third == "abc");
  }

  std::cout<< "Done testing assignment constructor." <<std::endl;
}
