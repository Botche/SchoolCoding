#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	int n,i,m,j,k=0;
	char A[100],B[100][100];
	cout<<"n=";cin>>n;
	for(i=0;i<n;i++)
	{cout<<"A["<<i<<"]=";cin>>A[i];
	}
	Sleep(1500);
	system("cls");
	cout<<"n="<<n<<endl;
	for(i=0;i<n;i++)
	cout<<A[i];
	cout<<endl;cout<<endl;
	Sleep(1500);
	for(i=0;i<n;i++)
	{
		if(i*i<n&&(i+1)*(i+1)>n)
		{
			for(j=0;j<(i+1);j++)
			{
				for(m=0;m<(i+1);m++)
				{
					B[j][m]=A[k];
					k++;
					cout<<B[j][m];
					cout<<endl;
				}
			}	
		}
	}
	return 0;
}
