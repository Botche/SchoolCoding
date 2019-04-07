#include <iostream>
using namespace std;
int main ()
{int a,b,c,d,br=0; 
cout << "DSPK, koqto izvejda chetnite chisla" "\n " ;
cout <<"Vyvedete chisloto a: "; cin>>a;
cout <<"Vyvedete chisloto b: "; cin>>b;
cout <<"Vyvedete chisloto c: "; cin>>c;
cout <<"Vyvedete chisloto d: "; cin>>d;
if (a % 2 ==0) br=br+1;
if (b % 2 ==0) br=br+1;
if (c % 2 ==0) br=br+1;
if (d % 2 ==0) br=br+1;
cout << "Broq na chetnite chisla e "<< br<< endl;
return 0 ;
}
