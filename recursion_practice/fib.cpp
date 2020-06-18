//
//Nafees Mahmood
//Fibonacci sequence for recursion lab
//

#include <iostream>

int fib(int n);
int main(){
 
  int n = 0;
  int p = 0;

  std::cout << "Enter a number: \n";
  std::cin >> n;
  std::cout << "The fibonacci sequence is: \n";


  for(int i = 0; i < n ; ++i){
  p = fib(i);
  std::cout << p;
  if (i < (n-1)) std::cout<<" ,";
  else std::cout<<".";
  }
  std::cout<<"\n";
  return 0;
}


int fib(int n){
  {
    if(n==0){
      return 0;
    }
    if(n==1){
      return 1;
    }
    return fib(n-1)+fib(n-2);
  }
}

