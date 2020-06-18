//
//Nafees Mahmood
//CS23001
//Project 1
//bigint.hpp
//September 14 2018
//


#ifndef CS2_BIGINT_H_
#define CS2_BIGINT_H_

#include <iostream>

const int MAX_SIZE = 512;


class bigint{

public:

  bigint();                      //default constructor
  bigint(int);                   //constructor to initialize a int to a bigint
  bigint(const char []);  //constructor to initialize a char to  bigint
  void debug_print(std::ostream&) const;    //method to debug the bigint
  bool operator == (const bigint&) const;
  friend std::ostream& operator << (std::ostream&, const bigint&);
  friend std::istream& operator >> (std::istream&, bigint&);
  bigint operator+ (const bigint&)const;
  int operator[] (const int);
  bigint timesDigit(int);
  bigint times10(int);
  bigint operator* (bigint);

private:
  int digit[MAX_SIZE];

};

#endif


