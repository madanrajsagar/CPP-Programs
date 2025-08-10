#include <iostream>
using namespace std;

int main ()
{
int a[10],j,n,i,temp;
cout << "enter how many ele you want =" << endl;
cin >>n ;
cout<<"enter array elements =";

for(i=0;i<n;i++)
{

	cin>>a[i];

}

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
	
    if(a[i]>a[j])
    {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    
    }



}
}

for(i=0;i<n;i++)
{
cout << "array elements \n" << a[i];

}




}