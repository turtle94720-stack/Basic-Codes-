#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
        char str1[100], str2[100];
        cout<<"\n Enter First String : ";
        gets(str1);
        cout<<"\n Enter Second String : ";
        gets(str2);
        if(strcmp(str1, str2)==0)
        {
                cout<<"\n Strings are Equal!!!";
        }
        else
        {
                cout<<"\n Strings are Not Equal!!!";
        }
        return 0;
}
