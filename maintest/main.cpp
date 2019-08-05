#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;

int main(int argc, char** argv)
{

    string argvtmp;
    int inttmp[15];

    assert(0);
    printf("1:%s 2:%s",argv[1],argv[2]);
    for(int i=1;i<16;i++)
    {

        argvtmp=argv[i];
        inttmp[i]=atoi(argvtmp.c_str());
	cout<< "inttmp :"<<inttmp[i]<<endl;
    }

    string abc;
    for(int i=0;i<argc;i++)
    {
         abc =argv[i];
        cout<<argv[i]<<endl;
        int a =atoi(abc.c_str());
        cout<< "int :"<<a<<endl;
    }

  return 0;
}

