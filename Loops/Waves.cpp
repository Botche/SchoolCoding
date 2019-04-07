#include<iostream>
using namespace std;
int main()
{
	int A[10][10],i=0,j,n,m,k,b;
	cout<<"n=";cin>>n;
	cout<<"m=";cin>>m;
	b=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<"A["<<i<<"]["<<j<<"]=";cin>>A[i][j];
		}
	}
	cout<<endl;
	i=-1;
	for(j=0;j<m;j++)
	{
		i++;
		if(i==0)
		{
			while(i<n)
			{
				cout<<A[i][j]<<" ";
				i++;
			}
			continue;
		}
		i-=2;
		if(i==n-1)
		{
			while(i>-1)
			{
				cout<<A[i][j]<<" ";
				i--;
			}
			continue;
		}
	}
	cout<<endl;
	return 0;
}


