 #include<iostream>
#include<string>
using namespace std;
int a[4][4],plX[10],plY[10],win;
void vhod(int t)
{   int a1,a2;
    cin>>a1>>a2;
    plX[t]=a1;
    plY[t]=a2;
    if(plX[t]>3 || plY[t]>3){cout<<"Nadvi6ava6 razmerite na tablicata vuvedi drugi po-malki ot 4!!"<<endl;vhod(t);}
    if(a[plX[t]][plY[t]]==1){cout<<"Tam ima X vuvedi drugi!!"<<endl;vhod(t);}
    if(a[plX[t]][plY[t]]==2){cout<<"Tam ima O vuvedi drugi!!"<<endl;vhod(t);}
}
bool Win(int player)
{
    if(a[1][1]==player && a[1][2]==player && a[1][3]==player)return true;
    if(a[2][1]==player && a[2][2]==player && a[2][3]==player) return true;
    if(a[3][1]==player && a[3][2]==player && a[3][3]==player) return true;
    if(a[1][1]==player && a[2][1]==player && a[3][1]==player) return true;
    if(a[1][2]==player && a[2][2]==player && a[3][2]==player) return true;
    if(a[1][3]==player && a[2][3]==player && a[3][3]==player) return true;
    if(a[1][1]==player && a[2][2]==player && a[3][3]==player) return true;
    if(a[3][1]==player && a[2][2]==player && a[1][3]==player)return true;
    return false;
}
void zanulqvane()
{
    for(int z1=1;z1<=3;z1++)
        for(int z2=2;z2<=3;z2++)
        {
        a[z1][z2]=0;
        a[1][1]=0;
        }

}
int main()
{int game;
cout<<"The Tic Tac Toe"<< "\n ";
    int pl=1 ;

    for(int turn=1;turn<=9;turn++)
    {int pl=1;
        if(turn%2==0)pl=2;
        if(turn%2==1)pl=1;
        cout<<"Nared e igra4 "<<pl<<" vuvedi koordinati!"<<endl;
        vhod(turn);
        if(a[plX[turn]][plY[turn]]==0)a[plX[turn]][plY[turn]]=pl;
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=3;j++)
            {
                if(a[i][j]==1)cout<<"X";
                if(a[i][j]==2)cout<<"O";
                if(a[i][j]==0)cout<<" ";
            }
            cout<<endl;
        }
        if(Win(1)){cout<<"Igra4 1 pobedi . BRAVO"<<endl;win=1;break;}
        if(Win(2)){cout<<"Igra4 2 pobedi . BRAVO"<<endl;win=1;break;}

    }
    if(win==0)cout<<"Igrata e naravno :("<<endl;
    cout<<"Iska6 li pak ?"<<endl;
    cout<<"DA    ILI    NE"<<endl;
    string ans;
    cin>>ans;
    if(ans=="DA"){zanulqvane();main();}
    return 0;
}
