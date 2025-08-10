#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int k,i,j;
    clrscr ();
    
    cout<<"enter the value of k = ";
    cin>>k;
    
    for(i=1;i<=k;i++)
    {
     for(j=1;j<=k-i;j++)
     {
       cout << " " ;
     
     }
     for(j=1;j<=i;j++)
     {
         cout << "*" ;
     }
     
     
     cout << endl;
     
     
     }

    return 0;
}