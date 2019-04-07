#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int max,ave=1,n,i,j,A[10],sum=0;
	cout<<"n=";cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"A["<<i<<"]=";cin>>A[i];
	}
	max=A[0];
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
		max+=0;
		}
		else
		{
			if(max<abs(A[i]))
			max=A[i];
		}
		sum+=A[i];
	}
	ave=sum/n;
	cout<<"ave="<<abs(ave)<<endl;
	cout<<"max="<<abs(max)<<endl;
}
