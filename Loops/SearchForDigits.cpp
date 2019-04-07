#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,m,n;
	char A[100];
	cin.getline(A,100,'\n');
	n=strlen(A);
	m=strlen(A);
	for(i=0;i<n;i++)
	{
		if(47<A[i]&& A[i]<57)
		{
		cout<<char(A[i]);
		m--;
		}
	}
	cout<<endl;
	cout<<"Broqt na chislata e "<<n-m<<endl;
	cout<<"Broqt na vschki simvoli e "<<n<<endl;
	system("pause");
	return 0;
}
