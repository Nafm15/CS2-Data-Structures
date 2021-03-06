//Nafees Mahmood
//CS 23001
//Project 1
//bigint
//September 22 2018

//Basics for opening a file for milestone 2
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"
#include "bigint.cpp"

int main(){
  std::ifstream in("data1-1.txt");    //Define stream for input
  if(!in){
    std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
    exit(1);
  }

  bigint num1;
  bigint num2;
  bigint result;
  char colon;

  in >>num1;
  in >>colon;
  in >>num2;
  result = num1 + num2;
  std::cout<<"Number 1: " << num1 << "\n";
  std::cout<<"Number 2: " << num2 << "\n";
  std::cout<<"Result : " << result <<"\n";

  while(!in.eof()){

    bigint num3;
    bigint num4;
    bigint sum;

    in >> colon;
    if(colon != ';'){
	in >> num3;
	std::cout << "Number 1 : " << num3 << "\n";
	in >> colon;
      }
      else{
	in >> colon;
      }
      
    if(colon != ';'){
	  in >> num4;
	  std::cout << "Number 2 : " << num4 << "\n";
	  in >> colon;
	}
	else{
	  in >> colon;
	}

	sum  = num3 + num4;
	std::cout << "Sum : " << "\n";
  }
  in.close();
  return 0;
}
