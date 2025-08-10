#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public: 
    int area(int x)
    {
        return(x*x);
     }
    void show(int x)
        {
            int c;
            c=area(x);
            cout<<"area of square = ";
         }
   };
  int main()
{
     clrscr();
    A obj;
    obj.show(10);
    
 return 0;
getch();
}