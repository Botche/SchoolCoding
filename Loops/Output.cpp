#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	int A[10][10],i,j,n,k,br=0,m;
	cout<<"n=";cin>>n;
	m=n*n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		cout<<"A["<<i<<"]["<<j<<"]=";cin>>A[i][j];
		}
	}
	Sleep(2000);
	system("cls");
	Sleep(2000);
	cout<<"Podredenata redica e:"<<endl;
	for(k=0;k<n;k++)
	{
	i=k;j=k;
	while(j<n)
	{
		cout<<A[i][j]<<" ";
		j++;
		br++;
	}
	if(br==m)
	break;
	i=k+1;j=n-1;
	while(i<n)
	{
		cout<<A[i][j]<<" ";
		i++;
		br++;
	}
	if(br==m)
	break;
	i=n-1;j=n-2;
	while(j>0)
	{
		cout<<A[i][j]<<" ";
		j--;
		br++;
	}
	if(br==m)
	break;
	i=n-1;j=k;
	while(i>0)
	{
		cout<<A[i][j]<<" ";
		i--;
		br++;
	}
	if(br==m)
	break;
	n--;
}
Sleep(2000);
	return 0;
}
