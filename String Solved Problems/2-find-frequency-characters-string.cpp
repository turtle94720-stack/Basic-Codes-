#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   int i,count=0;
   char ch[50],c;

   cout<<"\nEnter Any String :: ";
   cin>>ch;

   cout<<"\nEnter any Character to count occurrence :: ";
   cin>>c;

   for(i=0;ch[i]!='\0';i++)
   {
       if(ch[i]==c)
            count++;
   }
   if(count==0)
   {
        cout<<"\nGiven character [ "<<c<<" ] not found.\n";
   }
   else
   {
        cout<<"\nNo. of Occurrences of [ " <<c<<" ] is :: "<<count<<" times.\n";
   }

   return 0;

}
