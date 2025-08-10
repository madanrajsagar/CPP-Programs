#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

    int main ()
    {
        char a[100];
        char b[10];
        
        cout << "enter name of madanraj = " ;
        cin>>a>>b;
        strcpy(b,a);
        
        cout << "surname of Madanraj " <<a;
        
        return 0;
        }