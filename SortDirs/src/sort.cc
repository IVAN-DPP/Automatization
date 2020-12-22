#ifndef SORT_CC
#define SORT_CC

#include "../include/sort.h"
#include <dirent.h>
#include <stdio.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string>
#include <iostream>

Sort::Sort(string PD){

  PathDir=PD;
  DirPointer = opendir(PathDir.c_str());

  if(DirPointer == NULL){ perror(":'(\t"); exit(EXIT_FAILURE); }

  else {
    Dir = readdir(DirPointer);
    cout << "********************************************************************************************\n" 
	 << "\t\t\tWe can open the dir:" << PD << endl;
  }
}

void Sort::NewDir(string ND){
  
  NewDirName=PathDir+"/"+ND;
  DIR *NDIR = opendir(NewDirName.c_str());

  if(NDIR == NULL)
    mkdir(NewDirName.c_str(),0777);
  else
    printf("\tThe directory %s has already been created\n",
	   NewDirName.c_str());
}

void Sort::Save(string ext1){
  
  string File;
  string Ext;
  
  while( (Dir = readdir(DirPointer)) != NULL){

    File = Dir->d_name;

    if(File == "." || File == "..") continue;
    if(long(File.find_last_of(".")) == -1) continue;
    if(long(File.find_last_of(".")) == 0) continue;
    Ext=File.substr(File.find_last_of(".")+1,File.size()-File.find_last_of(".")-1);

    if(ext1 == Ext){
      rename((PathDir+"/"+File).c_str(),(NewDirName+"/"+File).c_str());
    }
  }    
  cout << "\t\t\t\tWe Finish Here \U0001F600" << endl
       << "********************************************************************************************" << endl;
}

void Sort::Save(string ext1,string ext2){
  
  string File;
  string Ext;


  while( (Dir = readdir(DirPointer)) != NULL){
      
    File = Dir->d_name;
      
    if(File == "." || File == "..") continue;
    if(long(File.find_last_of(".")) == -1) continue;
    if(long(File.find_last_of(".")) == 0) continue;
    Ext=File.substr(File.find_last_of(".")+1,File.size()-File.find_last_of(".")-1);
      
    if(ext1 == Ext || ext2 == Ext){
      rename((PathDir+"/"+File).c_str(),(NewDirName+"/"+File).c_str());
    }
  }
  cout << "\t\t\t\tWe Finish Here \U0001F600" << endl
       << "********************************************************************************************" << endl;
}


void Sort::Save(string ext1,string ext2,string ext3){
  
  string File;
  string Ext;


  while( (Dir = readdir(DirPointer)) != NULL){
      
    File = Dir->d_name;
      
    if(File == "." || File == "..") continue;
    if(long(File.find_last_of(".")) == -1) continue;
    if(long(File.find_last_of(".")) == 0) continue;
    Ext=File.substr(File.find_last_of(".")+1,File.size()-File.find_last_of(".")-1);
      
    if(ext1 == Ext || ext2 == Ext || ext3 == Ext){
      rename((PathDir+"/"+File).c_str(),(NewDirName+"/"+File).c_str());
    }
  }    
  
  cout << "\t\t\t\tWe Finish Here \U0001F600" << endl
       << "********************************************************************************************" << endl;
}



void Sort::Save(string ext1,string ext2,string ext3,string ext4){
  
  string File;
  string Ext;


  while( (Dir = readdir(DirPointer)) != NULL){
      
    File = Dir->d_name;
      
    if(File == "." || File == "..") continue;
    if(long(File.find_last_of(".")) == -1) continue;
    if(long(File.find_last_of(".")) == 0) continue;
    Ext=File.substr(File.find_last_of(".")+1,File.size()-File.find_last_of(".")-1);
      
    if(ext1 == Ext || ext2 == Ext ||
       ext3 == Ext || ext4 == Ext){
      rename((PathDir+"/"+File).c_str(),(NewDirName+"/"+File).c_str());
    }
  }
  cout << "\t\t\t\tWe Finish Here \U0001F600" << endl
       << "********************************************************************************************" << endl;
}

void Sort::Save(string ext1,string ext2,string ext3,string ext4,string ext5){
  
  string File;
  string Ext;


  while( (Dir = readdir(DirPointer)) != NULL){
      
    File = Dir->d_name;
      
    if(File == "." || File == "..") continue;
    if(long(File.find_last_of(".")) == -1) continue;
    if(long(File.find_last_of(".")) == 0) continue;
    Ext=File.substr(File.find_last_of(".")+1,File.size()-File.find_last_of(".")-1);
      
    if(ext1 == Ext || ext2 == Ext || ext3 == Ext ||
       ext4 == Ext || ext5 == Ext){
      rename((PathDir+"/"+File).c_str(),(NewDirName+"/"+File).c_str());
    }
  }
  cout << "\t\t\t\tWe Finish Here \U0001F600" << endl
       << "********************************************************************************************" << endl;
}

void Sort::Save(string ext1,string ext2,string ext3,string ext4,string ext5,string ext6){
  
  string File;
  string Ext;


  while( (Dir = readdir(DirPointer)) != NULL){
      
    File = Dir->d_name;
      
    if(File == "." || File == "..") continue;
    if(long(File.find_last_of(".")) == -1) continue;
    if(long(File.find_last_of(".")) == 0) continue;
    Ext=File.substr(File.find_last_of(".")+1,File.size()-File.find_last_of(".")-1);
      
    if(ext1 == Ext || ext2 == Ext || ext3 == Ext ||
       ext4 == Ext || ext5 == Ext || ext6 == Ext){
      rename((PathDir+"/"+File).c_str(),(NewDirName+"/"+File).c_str());
    }
  }
  cout << "\t\t\t\tWe Finish Here \U0001F600" << endl
       << "********************************************************************************************" << endl;
}

void Sort::Save(string ext1,string ext2,string ext3,string ext4,string ext5,string ext6,string ext7){
  
  string File;
  string Ext;


  while( (Dir = readdir(DirPointer)) != NULL){
      
    File = Dir->d_name;
    
    if(File == "." || File == "..") continue;
    if(long(File.find_last_of(".")) == -1) continue;
    if(long(File.find_last_of(".")) == 0) continue;
    Ext=File.substr(File.find_last_of(".")+1,File.size()-File.find_last_of(".")-1);
    
    if(ext1 == Ext || ext2 == Ext || ext3 == Ext ||
       ext4 == Ext || ext5 == Ext || ext6 == Ext ||
       ext7 == Ext){
      rename((PathDir+"/"+File).c_str(),(NewDirName+"/"+File).c_str());
    }
  }
  cout << "\t\t\t\tWe Finish Here \U0001F600" << endl
       << "********************************************************************************************" << endl;
}

#endif
