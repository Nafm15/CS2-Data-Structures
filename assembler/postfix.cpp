#include "utilities.hpp"
#include "string.hpp"
#include "stack.hpp"
#include <cstdlib>
#include <fstream>
#include <iostream>

int main(int argc, char* argv[]){

  if(argc == 1){
    std::cout << "Input filename is required" << std::endl;
  }

  std::ifstream in(argv[1]);
  if(!in)
    std::cout << "Couldn't open input file " << argv[1] << "\n";

  if(argc == 3){
    std::ofstream out(argv[2]);
    if(!out){
      std::cout << "Couldn't open output file " << argv[2] << "\n";
    }

    String token;
    String infix;

    while(!in.eof()){
      in >> token;
      std::cout << "|" << token << "|" << std::endl;

      if ((token != ";") && (token != '\n') && (token != '\r')){
        infix = infix + token + " ";
      }
      else{
        infix = infix + ";";
	std::cout << infix << std::endl;
        String postfix = postfix_of(infix);
	std::cout << postfix << std::endl;
        infix = "";
      }
    }

    //out.close();
  }
  std::cout << "before close" << std::endl;
  in.close();

  return 0;
}
