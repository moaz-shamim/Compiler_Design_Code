#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
 int state=1;
 char ch;
 int error;
 cout<<"Enter any word to check Identifier.\n";
 ch=getchar();
 while( isalpha(ch)||isdigit(ch) )
 {
  switch(state)
  {
   case 1:if(isalpha(ch))
          { state=2; break; }
          else
          {error=1;
		   break; }
   case 2:if( isalpha(ch)||isdigit(ch) )
          { state=2; break; }
          else
          {cout<<"Error"; }
   }
   ch=getchar();
 }

 if( state==2 && ch==10 && error!= 1 )
    { cout<<"\nValid Identifier.";}
 else
    { cout<<"\nInvalid Identifier.";}


}









