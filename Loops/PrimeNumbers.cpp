#include<iostream>
using namespace std;
int main()
  {
      int n;
      cin >>n;
      cout<<2;
     for (int k=3; k<=n ;k++)
     {
        for(int p=2;p<=k;p++)
        {
            if(k%p==0&&k==p){cout <<" "<<k;break;}
            if(k%p==0)break;
        }
     }
     cout<<endl;
     return 0;
 }
