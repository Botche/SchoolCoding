#include<iostream>
using namespace std;
int main()
{
	int n,A[10][10],i,j;
	cout<<"DSPK da izvejda kvadrat, koito vynshnata mu chast da e ot *, vytreshnata ot +."<<endl;
	cout<<"n=";cin>>n;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>0&&i<n-1&&j>0&&j<n-1 )
			cout<<"+";
			else 
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
