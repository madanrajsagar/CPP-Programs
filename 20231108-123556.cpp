#include<iostream>
#include<fstream>
using namespace std ;
int main()
{
  char name[15];
  fstream obj;
  obj.open("C:\\program.txt",ios::out);
  cout<<"enter the name";
  cin>>name;

  obj<<name;
  obj.close();

}