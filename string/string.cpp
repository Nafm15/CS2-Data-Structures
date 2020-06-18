//
//Nafees Mahmood
//Project 2: string.cpp
//
//const int STRING_SIZE = 256
//

#include "string.hpp"
#include <iostream>
#include <cassert>
#include <vector>

String::String(){
  STRING_SIZE = 1;
  str = new char[1];
  str[0]  = '\0';
}

String::String(char ch){
  str = new char[2]; //
  str[0] = ch;
  str[1] = '\0';
  STRING_SIZE = 2; //
}

String::String(const char word[]){
  int i = 0;
  while (word[i] != '\0')
    i++;
  str = new char[i+1];
  STRING_SIZE = i + 1;

  i = 0;
  while (word[i] != '\0') {
    str[i] = word[i];
    i++;
  }
  str[i] = '\0';
}

String::String(const String& a){
  STRING_SIZE = a.STRING_SIZE;
  str = new char[STRING_SIZE];
  int i = 0;
  while(a.str[i] != 0){
    str[i] = a.str[i];
    i++;
  }
  str[i]=0;
}

String::~String(){
  delete[] str;
}

void String::swap(String& rhs){

  char *temp = str;
  int temp_size=STRING_SIZE;

  str=rhs.str;
  STRING_SIZE=rhs.STRING_SIZE;

  rhs.str = temp;
  rhs.STRING_SIZE = temp_size;
}


String& String::operator=(String rhs){
  swap(rhs);
  return *this;
}

char& String::operator[](int i){
  assert(i >= 0);
  assert(i <= STRING_SIZE);
  return str[i];
}

char String::operator[](int i) const{
  assert(i >= 0);
  assert(i <= STRING_SIZE);
  return str[i];
}

int String::length() const{  //includes null terminator
  int i = 0;
  while(str[i] != '\0'){
    i++;
  }
  return i;
}

int String::capacity() const{  //does not include null terminator
  return STRING_SIZE-1;
}

String String::operator+(const String& rhs) const{  //concat
  int offset = length();
  String result(length()+ rhs.length() + 1, str);
  int i = 0;
  while(rhs.str[i] != 0){
    result.str[offset + i] = rhs.str[i];
    ++i;
  }
  result.str[offset + i] = 0;
  return result;
}

String& String::operator+=(const String& rhs){
  int offset = length();
  int i = 0;
  while(rhs.str[i] != 0){
    str[offset+i] = rhs.str[i];
    ++i;
  }
  str[offset+i] = 0;
  return *this;
}


bool String::operator==(const String& rhs) const{
  int i = 0;
  while((str[i] != '\0')){
    if(str[i] != rhs.str[i]){
      return false;
    }
    ++i;
  }
  return str[i] == rhs.str[i];
}


bool String:: operator<(const String& rhs) const{
  int i = 0;
  while(str[i] != 0 && rhs.str[i] != 0 && str[i] == rhs.str[i])
    ++i;
  if((str[i] == 0) && (rhs.str[i] == 0)) return false;
  if(str[i] == 0) return true;
  if(str[i] < rhs.str[i]) return true;
  return false;
}

String operator+ (const char lhs[], const String& rhs){
  return(String(lhs)+rhs);
}

String operator+ (char lhs, const String& rhs){
  return(String(lhs)+rhs);
}

bool operator== (const char lhs[], const String& rhs){
  return (String(lhs)==rhs);
}

bool operator== (char lhs, const String& rhs){
  return (String(lhs)==rhs);
}

bool operator<(const char* lhs, const String& rhs){
  return String(lhs)<rhs;
}

bool operator<(char lhs, const String& rhs){
  return String(lhs)<rhs;
}

bool operator<=(const String& lhs, const String& rhs){
  return ((lhs<rhs) || (lhs==rhs));
}

bool operator!=(const String& lhs, const String& rhs){
  return (!(lhs==rhs));
}

bool operator>=(const String& lhs, const String& rhs){
  return (!(lhs<rhs));
}

bool operator>(const String& lhs, const String& rhs){
  return (rhs<lhs);
}

//------------------------------------------------------


String String::substr(int start, int end) const{  //returns the sub-string from start to end position (inclusive)
  if(start<0) start = 0;
  if(start > end) return String();
  if(start >= length()) return String();

  String result(end - start + 1);
  int i = start;
  while(str[i] == 0){
    result.str[i-start] = 0;
    ++i;
  }
  i = start;
  while((i <= end) && (str[i] != 0)){
    result.str[i-start] = str[i];
    ++i;
  }
  return result;
}

int String::findch(int pos, char ch) const{  //returns location of ch at or after pos, returns -1 if not found
  
  if((pos>length()) || (pos<0)) return -1;

  while((str[pos] != 0) && (str[pos] != ch))
    ++pos;
  if(str[pos] == 0)
    return -1;
  else return pos;
}

int String::findstr(int pos, const String& sub) const{  //returns the location of wd at or after pos, returns -1 if not found

  int sublen = sub.length();
  int searchlen = length() - sublen;
  if((pos > length()) || (pos < 0)) return -1;
  
  for(int i = pos; i <= searchlen; ++i){
    if((substr(i,(i+sublen-1))) == sub){
      return i;
    }
  }
  return -1;
}

std::istream& operator>>(std::istream& in, String& rhs){
  
  char ch[256];
  in >> ch;
  String temp(ch);
  rhs.swap(temp);
  return in;
}

std::ostream& operator<<(std::ostream& out, const String& rhs){
  out << rhs.str;
  return out;
}


void String::resetCapacity(int n){
  char* newArr = new char[n+1];
  int i = 0;
  while (str[i] != 0){
    newArr[i] = str[i];
  }
  newArr[i] = '\0';
  STRING_SIZE = n+1;
  delete[] str;
  str = newArr;
}

String::String(int n){
  STRING_SIZE = n+1;
  str = new char[n+1];
  for(int i = 0; i <= n; ++i){
    str[i] = '\0';
  }
}

String::String(int n, const char word[]){
  STRING_SIZE = n+1;
  str = new char[n+1];

  for(int i = 0; i < n; ++i){
    str[i]=word[i];
    if(word[i] == '\0'){
      str[i] = '\0';
      break;
    }
  }
  str[n]='\0';
}

std::vector<String> String::split(char ch)const{
  std::vector<String> result;
  String str1;

  for(int i = 0; str[i] != 0; ++i){
    if(str[i] != ch){
      str1 = str1 + str[i];
    }
    else{
      result.push_back(str1);
      if(str[i+1]!=ch)
        str1 = str[++i];
      else{
        str1="";
        result.push_back(str1);
        i++;
      }
    }
  }
  result.push_back(str1);
  return result;
}
