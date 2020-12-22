#ifndef SORT_H
#define SORT_H

#include <vector>
#include <string>
#include <dirent.h>
#include <stdio.h>
#include <string>
using namespace std;

class Sort{

protected:
  string PathDir;      //Path of the directory to organize
  DIR *DirPointer;     
  struct dirent *Dir;
  string NewDirName;   //Name of the directory to create
  string File;         //Name of the file with the some extention
  
public:
  
  Sort(string);
  void NewDir(string);
  void Save(string);
  void Save(string,string);
  void Save(string,string,string);
  void Save(string,string,string,string);
  void Save(string,string,string,string,string);
  void Save(string,string,string,string,string,string);
  void Save(string,string,string,string,string,string,string);
};


#endif

//Read the following links for understand the Dir pointer:
//About DIR and struct dirent: https://programmer.group/detailed-description-of-dir-dirent-stat-and-other-structures-under-linux.html
//https://www.gnu.org/software/libc/manual/html_node/Directory-Entries.html
//https://pubs.opengroup.org/onlinepubs/7908799/xsh/dirent.h.html
//About strtok() function: https://www.tutorialspoint.com/c_standard_library/c_function_strtok.htm
