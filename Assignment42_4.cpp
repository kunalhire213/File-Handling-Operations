/*
      Write a program which accepts file name and one character from user and
      count number of occurrences of that characters from that file.

      Input : Demo.txt ‘M’
      
      Output : Frequency of M is 7
*/

#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

using namespace std;

int CountChar(char fname[] , char ch)
{
    int fd = 0 , iCnt = 0 , iret = 0 , i = 0;
    char buffer[30];
    
    fd = open(fname,O_RDONLY);
    
    while((iret = read(fd,buffer,30))!= 0)
    {
      while(i < iret)
      {
         if(buffer[i] == ch)
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
    char cValue = '\0';
    
    cout<<"Enter File Name :\n";
    cin>>fname;
    
    cout<<"Enter the character :\n";
    cin>>cValue;
    
    iRet = CountChar(fname,cValue);
    
    cout<<"frequency of that character is :"<<iRet<<"\n";
    
return 0;
}






















