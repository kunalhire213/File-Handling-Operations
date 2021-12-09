/*
     Write application which accept file name from user and read all data from that file
     and display contents on screen.

      Input : Demo.txt
      Output : display the data from that file.
*/

#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

using namespace std;

void ReadFile(char *fname)
{
     int fd = 0;
     char data[700];
     
     fd = open(fname,O_RDONLY);
     
     read(fd,data,700);
     
     write(1,data,700);
}

int main()
{
    char fname[50] = {'\0'};
    
    cout<<"Enter File Name :\n";
    cin>>fname;
    
     ReadFile(fname);
    

return 0;
}






















