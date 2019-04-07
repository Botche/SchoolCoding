#include<iostream>
#include<cmath>
using namespace std;
int n,i,j,d=1;
long double A[10][10],m;
void Vhod()
{
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<"A["<<i<<"]["<<j<<"]=";cin>>A[i][j];
		}
		cout<<endl;
	}
}
int Fun(int k)
{
	if((n-k)!=2)
	{
		for(i=k;i<n;i++)
		{
			m=(-1)*A[i+1][k]/A[k][k];
		    for(j=k;j<=n;j++)
		    {
			    A[i+1][j]=A[k][j]*m+A[i+1][j];
		    }
		}
		d*=A[k][k];
		return Fun(k+1);
	}
	else{
		cout<<endl;
		d*=(A[k][k]*A[k+1][k+1]*A[k+2][k+2]+A[k][k+1]*A[k+1][k+2]*A[k+2][k]+A[k][k+2]*A[k+1][k]*A[k+2][k+1]-A[k][k+2]*A[k+1][k+1]*A[k+2][k]-A[k][k]*A[k+1][k+2]*A[k+2][k+1]-A[k+2][k+2]*A[k+1][k]*A[k][k+1]);
		cout<<"d="<<ceil(d)<<endl;
	}
}
int main()
{
	cout<<"Da se systavi programa koqto izvejda determinantata na matrica on n-ti( n[3:5]) rank"<<endl;
	cout<<"Vuvedete ranka na matricata=";cin>>n;
	Vhod();
	Fun(1);
	return 0;
	system("pause");
}
