#include<iostream>
#include<conio.h>
using namespace std;

    void sum(int a[])
    {
      int i,sum=0;
      for(i=0;i<4;i++)
      {
          sum=sum+a[i];
      }
      cout<<" addition = "<<sum;
      
    
    }
    
    
    void sum(float a[])
    {   
        float sum=0;
        int i;
       for(i=0;i<4;i++)
      {
          sum=sum+a[i];
      }
        cout <<endl<< "addition = " <<sum;
    }
    
    
    int main ()
    {
        int a[10],i;
        cout << "enter array element 10 = " ;
        for(i=0;i<10;i++)
        {
        cin >> a[i];
        
        }
        
        float b[4];
        
        cout << "enter 4 float Elements = " ;
    
        for(i=0;i<4;i++)
        {
            cin >> b[i];
        }
        
        sum(a);
        sum(b);
    }