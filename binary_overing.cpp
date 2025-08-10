#include <iostream>
#include<conio.h>
using namespace std;

class complex 
    {
        
        private:
        int p,q;
        
        public:
         
        void show(int x ,int y)
        {
        
            p=x;
            q=y;
        
        }
        void display()
        {
        
        cout <<p<<"+" <<q<<"i"<<endl;
        
        }
     friend complex operator + (complex n1,complex n2) ;
 };   
 
 
      complex operator + (complex n1,complex n2)
     {
     complex n3;
     n3.p=n1.p+n2.p;
     n3.q=n1.q+n2.q;
     return(n3);
     }
   
    int main()     
    {
    complex obj,obj1,obj2;
    obj1.show(10,5);
    obj2.show(15,2);
    obj=obj1+obj2;
    obj.display();
    return 0;
    getch();
    
    }