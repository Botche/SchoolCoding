#include <iostream>
using namespace std;
bool R(int a, int b)
{if (a>b) return 1;
return 0;
}
int main ()
{int a, b, s ;
cout <<"DSKP, koqto da izvejda razlikata na a i b,ako izvede 1 stoinosta e + ako izvede 0 stoinosta e -" "\n ";
cout <<"Vyvedete chisloto a: "; cin>>a;
cout <<"Vyvedete chisloto b: "; cin >>b;
s = a - b ; 
cout << "Razlikata na a i b, s= " << s << endl;
cout << "Stoinosto na s e : " << R << endl;
return 0;
}
