#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char A[40],B[40],C[40],D[40];
	int i,j,n,m,a,b;
	cin.getline(A,40,'\n');
	cin.getline(B,40,'\n');
	n=strlen(A);
	m=strlen(B);
	for(i=0;i<n;i++)
	{
		if(123>A[i]&& A[i]>96)
		{
		A[i]=A[i]-32;
		cout<<char(A[i]);
		}
		else cout<<A[i];
	}
	cout<<"  ";
	for(i=0;i<n;i++)
	{
		if(91>A[i]&& A[i]>64)
		{
		A[i]=A[i]+32;
		cout<<char(A[i]);
		}
		else cout<<A[i];
	}
	cout<<endl;
	for(i=0;i<m;i++)
	{
		if(123>B[i]&& B[i]>96)
		{
		B[i]=B[i]-32;
		cout<<B[i];
		}
		else cout<<char(B[i]);
	}
	cout<<"  ";
		for(i=0;i<m;i++)
	{
		if(91>B[i]&& B[i]>64)
		{
		B[i]=B[i]+32;
		cout<<char(B[i]);
		}
		else cout<<B[i];
	}
	return 0;
}
