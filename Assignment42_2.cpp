/*
      Write a program which accepts file name from user and count number of
      small characters from that file.
*/

#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

using namespace std;

int CountSmall(char fname[])
{
    int fd = 0 , iCnt = 0 , iret = 0 , i = 0;
    char buffer[30];
    
    fd = open(fname,O_RDONLY);
    
    while((iret = read(fd,buffer,30))!= 0)
    {
      while(i < iret)
      {
         if((buffer[i] >= 'a')&&(buffer[i] <= 'z'))
         {
             iCnt++;
         }
         i++;
      }
    }
    
    close(fd);
    
    return iCnt;
}

int main()
{
    char fname[50] = {'\0'};
    int iRet = 0;
    
    cout<<"Enter File Name :\n";
    cin>>fname;
    
    iRet = CountSmall(fname);
    
    cout<<"Small letters are in file is :"<<iRet<<"\n";
    
return 0;
}






















