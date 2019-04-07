#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char A[40],B[40];
	int i,n,m;
	cin.getline(A,40,' ');
	cin.getline(B,40,'\n');
	n=strlen(A);
	m=strlen(B);
	if(n==m)cout<<"Nizovete sa s ednakva dyljina."<<endl;
	else {
		if(n<m)
		cout<<"Purviq niz e po kratyk."<<endl;
		else cout<<"Purviq e po dylyg."<<endl;
	}
	if(n==m || n>m){
		for(i=0;i<n;i++)
	{
		if(int(A[i])!=int(B[i]))
		{
		cout<<"Razlika po pozicii:"<<endl;
		cout<<i+1<<" "<<A[i]<<" - "<<B[i]<<endl;
	}
}
	} 
	if(n<m)
	{for(i=0;i<m;i++)
	{
		if(int(A[i])!=int(B[i]))
		{
		cout<<"Razlika po pozicii:"<<endl;
		cout<<i+1<<" "<<A[i]<<" - "<<B[i]<<endl;
	}
	}}
	return 0;
	}
