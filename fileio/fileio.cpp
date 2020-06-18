//Nafees Mahmood
//CS23001
//Lab 4
//File input output

#include <iostream>
#include<fstream>


void getWord(){
  
  std::ifstream file("fileio-text.txt");
  if(!file.is_open()){
    std::cerr << "Unable to open file\n";
  }
  else{
    char ch;
    file.get(ch);
    while(!file.eof() && ch != ' '){
      std::cout << ch;
      file.get(ch);
    }
    file.close();
    std::cout << "\n";
  }
}


void addNum(){
  std::ifstream file("fileio-data-1.txt");
  if(!file.is_open()){
    std::cerr << "Unable to open file";
  }
  else{
    int num1;
    int num2;
    char ch;
    int sum=0;
    
    file >>num1;
    file>>ch;
    file >>num2;

    sum = num1 + num2;
    std::cout << "Sum :" << sum;
  }
  std::cout << "\n";
  file.close();
}

int main(){
  getWord();
  addNum();
  
  return 0;
}
