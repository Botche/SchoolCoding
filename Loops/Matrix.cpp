#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int a,b,i,j,n;
cout<<"n= ";cin>>n;
a=n;
b=n;
for (i=1;i<=n;i++)
{
	if(i<n)
	{ 
	cout<<setw(a);
	for(j=1;j<=i;j++)
	{
		cout<<i<<" ";

	}
	cout<<endl;
	a--;}
	else
	{
		if (i>=5) cout<<setw(b-2)<<i<<" "<<i<<" "<<i<<endl;
		if (i==4) cout<<setw(b-1)<<i<<" "<<i<<endl;
		if (i<4) cout<<setw(b)<<i<<endl;
	}
	
}
cout<<endl;
system("pause");
return 0;
}
