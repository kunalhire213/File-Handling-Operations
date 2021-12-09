/*
      Write application which accept file name from user and create that file.

      Input : Demo.txt
      Output : File created successfully.
*/

#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

using namespace std;

int CreateFile(char *fname)
{
     int fd = 0;
     
     fd = creat(fname,0777);
     
     return fd;
}

int main()
{
    char fname[50] = {'\0'};
    int iRet = 0;
    
    cout<<"Enter File Name :\n";
    cin>>fname;
    
    iRet = CreateFile(fname);
    
    if(iRet != 0)
    {
        cout<<"file created Successfully\n";
    }
    else
    {
        cout<<"Unable to create file\n";
    }

return 0;
}






















