/*
      Write application which accept file name from user and open that file in read mode.

      Input : Demo.txt
      Output : File opened successfully.
*/

#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

using namespace std;

int OpenedFile(char *fname)
{
     int fd = 0;
     
     fd = open(fname,O_RDONLY);
     
     return fd;
}

int main()
{
    char fname[50] = {'\0'};
    int iRet = false;
    
    cout<<"Enter File Name :\n";
    cin>>fname;
    
    iRet = OpenedFile(fname);
    
    if(iRet != -1)
    {
        cout<<"file opened Successfully\n";
    }
    else
    {
        cout<<"Unable to opened file\n";
    }

return 0;
}






















