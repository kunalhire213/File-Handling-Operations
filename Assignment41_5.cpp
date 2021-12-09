/*
      Write application which accept file name from user and one string from user. Write
      that string at the end of file.

      Input : Demo.txt
              Hello World

      Output : Write Hello World at the end of Demo.txt file
*/

#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

using namespace std;

void WriteData(char *fname , char *str)
{
     int fd = 0 , size = 0 , iSum = 0;
     char buffer[30] = {'\0'};
     
     fd = open(fname,O_RDWR);
     
     lseek(fd,0,2);
     write(fd,str,4);
     
     close(fd);
}

int main()
{
    char fname[50] = {'\0'};
    char str[50] = {'\0'};
    int iRet = 0;
    
    cout<<"Enter File Name :\n";
    cin>>fname;
    
    cout<<"Enter string to write :\n";
    cin>>str;
    
    WriteData(fname,str);
    
return 0;
}






















