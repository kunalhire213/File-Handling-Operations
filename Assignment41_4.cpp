/*
      Write application which accept file name from user and display size of file.
      
      Input : Demo.txt
      Output : File size is 56 bytes
*/

#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

using namespace std;

int FileSize(char *fname)
{
     int fd = 0 , size = 0 , iSum = 0;
     char buffer[30] = {'\0'};
     
     fd = open(fname,O_RDWR);
     
     while((size = read(fd,buffer,30)) != 0)
     {
         iSum = iSum+size;
     }
     
     return iSum;
}

int main()
{
    char fname[50] = {'\0'};
    int iRet = 0;
    
    cout<<"Enter File Name :\n";
    cin>>fname;
    
    iRet = FileSize(fname);
    cout<<"file size is :"<<iRet<<"\n";
    
return 0;
}






















