#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char A[10],B[10];
	int n,m,i;
	cin.getline(A,10,' ');
	cin.getline(B,10,'\n');
	n=strlen(A);
	m=strlen(B);
	for(i=0;i<5;i++)
	{
		A[i]=0;
		A[i]=B[i];
		
	}
	for(i=0;i<n;i++)
	cout<<A[i];
	return 0;
}
