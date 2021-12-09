/*
      Write a program which accepts file name and one count from user and read
      that number of characters from starting position.
      
      Input : Demo.txt 12

      Output : Display first 12 characters from Demo.txt
*/

#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

using namespace std;

void DisplayN(char fname[] , int iNo)
{
    int fd = 0;
    char buffer[30];
    
    fd = open(fname,O_RDWR);
    
    read(fd,buffer,iNo);
    
    write(1,buffer,iNo);
    cout<<"\n";
    
    close(fd);
    
}

int main()
{
    char fname[50] = {'\0'};
    int iRet = 0;
    int iValue = 0;
    
    cout<<"Enter File Name :\n";
    cin>>fname;
    
    cout<<"Enter the count :\n";
    cin>>iValue;
    
    DisplayN(fname,iValue);
    
    
return 0;
}






















