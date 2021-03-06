//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 
#include "logentry.hpp"

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//

int LogEntry::to_i(const String& s){
  int sum = 0;
  for(int i = 0; i < s.length(); ++i){
    sum *= 10;
    sum += (s[i]-'0');
  }
  return sum;
}


LogEntry::LogEntry(String s) {      //splits the string of a string
    // ...


    std::vector<String> vec = s.split(' ');
    if(vec.size() == 10){
      host = vec[0];

      //split vec[3] on a colon to start with
      std::vector<String> date_time = vec[3].split(':');
      //date_time has four strings date_time[0] contains date
      //date_time[1] = hour, date_time[2] = minute,
      //date_time[3] = second

      std::vector<String> date_string = date_time[0].split('/');
      //date_string has three strings date_string[0] contains day,
      //date_string[1] = month, date_string[2] = year

      String stringday = date_string[0].substr(1, date_string[0].length());
      date.setday(stringday);
      
      //sets the day equal to the substring of date_string[0]
      //i.e. "18"; from position 1 to length of string
      //takes into account if day is single digit

      String stringmonth = date_string[1];
      date.setmonth(stringmonth);
      
      int intyear = to_i(date_string[2]);
      date.setyear(intyear);

      time.sethour(to_i(date_time[1])); //to_i
      time.setminute(to_i(date_time[2])); //to_i
      time.setsecond(to_i(date_time[3])); //to_i

      request = vec[5] + vec[6] + vec[7];
      
      status = vec[8];

      if(vec[9] == '-'){
	number_of_bytes = 0;
      }
      else{
	number_of_bytes = to_i(vec[9]); //to_i
      }

    }
    else{
	host = "";
	date.setday("");
	date.setmonth("");
	date.setyear(0);
	time.sethour(0);
	time.setminute(0);
	time.setsecond(0);
	request = "";
	status = "";
	number_of_bytes = 0;
      }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//

/*
std::vector<LogEntry> parse(std::istream& in){
  std::vector<LogEntry> result;
  int c = 0;
  do{
    c++;
    char ch_line[200];
    String str_from_chline(ch_line);
    if(str_from_chline == "") break;
    LogEntry myLogEntry(str_from_chline);
    result.push_back(myLogEntry);
  }while(!in.eof());
  //std::cerr<<"after while loop in parse\n";
  return result;
}
*/
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
    String temp;
    char ch;
    while(in.get(ch)){
      temp = temp + ch;
      if(ch == '\n'){
	result.push_back(temp);
	temp[0] = 0;
      }
    }
    return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> & vec_o_logs){  //outputs all the value
  
  for(unsigned int i = 0; i < vec_o_logs.size(); ++i){
    out << vec_o_logs[i];
  }
    
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>&logs) {  //just outputs host

  for(unsigned int i = 0; i < logs.size(); ++i){
    out << logs[i].gethost() << '\n';
  }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry> &logs) {  //outputs byte count
  int sum = 0;
  for(unsigned int i = 0; i < logs.size(); ++i){
    sum += logs[i].getbytes();
  }
  return 0;
}

std::ostream& operator<<(std::ostream& out, const LogEntry& log){
  
  out << "Host: " << log.host << '\n';
  
  out << "Day: " << log.date.getday() << '\n';
  out << "Month: " << log.date.getmonth() << '\n';
  out << "Year: " << log.date.getyear() << '\n';
  
  out << "Hour: " << log.time.gethour() << '\n';
  out << "Minute: " << log.time.getminute() << '\n';
  out << "Second: " << log.time.getsecond() << '\n';

  out << "Request: " << log.request << '\n';
  out << "Status: " << log.status << '\n';
  out << "Bytes: " << log.number_of_bytes << "\n\n";

  return out;
}

