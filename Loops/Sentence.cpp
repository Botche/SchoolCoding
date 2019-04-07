#include<iostream>
#include<Windows.h>
#include<string.h>
using namespace std;
int main()
{int n,i,br=1;
char A[100];
cout<<"Vuvedete izrechenie"<<endl;
cin.getline(A,100,'.');
n=strlen(A);
for(i=0;i<n;i++)
{n=strlen(A);
	if(A[i]!=' '){cout<<A[i];Sleep(150);}
	else { if(A[i+1]==' ')
		{Sleep(2000);
		i=0;
		A[100]=0;
		br=1;
		system("cls");
		cout<<"Izrechenieto e greshno vuvedete novo "<<endl;
		cin.getline(A,100,'.');
		}
		else {cout<<endl;br++;} 
		} 
		}
	
cout<<endl;
cout<<"Broqt na simvolite e "<<n<<endl;
cout<<"Broqt na dumite e "<<br<<endl;
system("pause");
return 0;
}


