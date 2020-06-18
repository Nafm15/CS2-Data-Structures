#include <iostream>
#include <fstream>
#include <sstream>
#include "utilities.hpp"
#include "string.hpp"
#include <sstream>


int main(int argc, char* argv[])
{
  String expression;
  String pstfx;
  std::ifstream infile(argv[1]);
  std::ofstream outfile;
  if(argc == 3){
    outfile.open(argv[2]);
  }

  if (infile.is_open())
    {
      getline(infile, expression);

      while (!infile.eof()) //getline( infile, expression))
        {
          if(outfile.is_open()){
            pstfx = postfix_of(expression);
            outfile << "Infix Expression: " << expression << " " << "Postfix Ex\
\
pression: " << pstfx << std::endl;
            outfile << "Postfix Assembly : " << assembly_of(pstfx) << std::endl\
\
              ;
          }
          else{
            pstfx = postfix_of(expression);
	    std::cout << "Infix Expression: " << expression << " " << "Postfix \
\
Expression: " << pstfx << std::endl;
	    std::cout << "Postfix Assembly : " << std::endl;
	    std::cout << assembly_of(pstfx) << std::endl;

	  }
          expression = "";
          getline(infile, expression);
        }
      infile.close();
      outfile.close();
    }
  else
    std::cout << "file open error";
  return 0;
}
