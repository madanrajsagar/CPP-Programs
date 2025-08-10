#include<iostream>
#include<conio.h>
using namespace std;
class first 
{
    public:
    int a,b ;
    void accept()
    {
        cout << "Enter the value of a and b = " ;
        cin>>a>>b;
    }
};

class second : public first 
{
    public:
    void show()
    {  
         accept ();
        cout <<a<<b<<endl;
    }

};

class third 
{
    public:
    int x,y;
    void sum()
    {
    
        cout << "enter tha values of x and y = " ;
        cin>>x>>y;
        
        cout << "sum of given numbers = " <<x+y<<endl;
    
    }

};

class fourth : public third 
{
    public:
    
    int A,B;
    void mul()
    {
        cout << "Enter the values of A and B = ";
        cin >> A>>B;
        
        cout << "sum of A and B = " <<A+B<<endl;
    
    }

};

class five : public fourth 
{
    public :
    
    float p,m;
    void dev()
    {
        cout << "Enter the value of p and m = " ;
        cin >> p>>m;
    
        cout << "Division of p and m  "<<p/m<<endl ;
    }


};

int main()
{
    second  obj;
    obj.show();
    five obj1;
    obj1.dev();
    obj1.mul();
    obj1.sum();
    
return 0;
}
    