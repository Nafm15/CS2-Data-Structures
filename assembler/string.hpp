//File:        string-interface.hpp
//       
//Version:     1.0
//Date:        Fall 2018
//Author:      Dr. J. Maletic
//
//Description: Interface definition of String class for Project 2, milestone 1.
//
// To use the supplied test oracles you will need to use this interface and namings.
// You must also have all of these methods and functions defined for your string class.
//
// You will either have use this interface or call your methods through this interface.
//
// You need to implement all of the methods and funcitons declared here.
//

#ifndef CS23001_STRING_INTERFACE_HPP
#define CS23001_STRING_INTERFACE_HPP

#include <iostream>
#include <vector>

////////////////////////////////////////////////////
// CLASS INV:   str[length()] == 0 &&
//              0 <= length() <= capacity() &&
//              capacity() == STRING_SIZE - 1
//
//
class String {
public:
            String        ();                     //Empty string
            String        (char);                 //Stirng('x')
            String        (const char[]);         //String("abcd")
            String        (const String&);        //Copy Constructor
            ~String       ();   
  void    swap          (String&);                        //Constant time swap
  String& operator=     (String);                         //Assignment Copy
  char&   operator[]    (int);                  //Accessor/Modifier
  char    operator[]    (int)            const; //Accessor
  int     capacity      ()               const; //Max chars that can be stored (not including null terminator)
  int     length        ()               const; //Number of char in string
  String  operator+     (const String&)  const; //Concatenation
  bool    operator==    (const String&)  const;
  bool    operator<     (const String&)  const;

  String& operator+=    (const String&);

  String  substr        (int,  int)                const; 
  int     findch        (int,  char)              const;
  int     findstr       (int,  const String&)     const; 

  std::vector<String> split(char) const;
  
  friend  std::istream& operator>>(std::istream&, String&);
  friend  std::ostream& operator<<(std::ostream&, const String&);

private:
   
  String        (int);                            //String(10) - size of 10.
  String        (int, const char[]);              //String(10, "abc") - Size 10 with "abc"
  void    resetCapacity (int);                            //Resets capacity to be N
  
  char    *str;                                           //Pointer to char[]
  int     STRING_SIZE;                                     //Size includes NULL terminator

};

String  operator+       (const char[],  const String&);
String  operator+       (char,          const String&);
bool    operator==      (const char[],  const String&);
bool    operator==      (char,          const String&);
bool    operator<       (const char[],  const String&);
bool    operator<       (char,          const String&);
bool    operator<=      (const String&, const String&);
bool    operator!=      (const String&, const String&);
bool    operator>=      (const String&, const String&);
bool    operator>       (const String&, const String&);

#endif
