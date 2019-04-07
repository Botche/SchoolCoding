#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,n;
	char A[50],a,b,c;
	cin.getline(A,50,'\n');
	n=strlen(A);
	i=n/2;
	cout<<"Pyrviq simvol e "<<A[0]<<endl;
	cout<<"Sredniq simvol e "<<A[i]<<endl;
	cout<<"Posledniq simvol e "<<A[n-1]<<endl;
	return 0;
}
