#include <iostream>
using namespace std;
int main()
{
int a[10],b,n,k,i;
cout<<"N=";cin>>n;
cout<<"k=";cin>>k;
cout<<"b=";cin>>b;
for (i=0;i<n;i++) 
{cout<<"a["<<i<<"]=";cin>>a[i];}
for (i=0,i<n+1;i++;)
{
if(i==k)
{
b=a[i];a[i++];
cout <<a[i]<<endl;
}
}
system("pause");
return 0;
}
