
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
//x: chieu Ngang; y: chien doc
using namespace std;
char a[79][24], key;
int p1 = 0;
int p2 = 0;
short x,y,i,m,n,m1,n1, LuaChon;
void MoDau();
void Choi2Nguoi();
void ChoiVoiMay();
void ThongTin();
void Thoat();
void HuongDan(short);
void VeKhung();
void tiso();
void khungtiso();
void tieptuc();
int thaydoiluot=0; int luot=0;
void Goto(int x, int y){
    COORD co = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , co);
}

void TextColor(int x)
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE) , x);
}

short Chan(short i){
    if (i%2==0) return 1;
    else return 0;
}

char OX(short i){
    if (Chan(i)==1) return 'O';
    else return 'X';
}

void VeOX(){
    if (a[n][m] != 'X' && a[n][m] != 'O'){
         if (Chan(i)==1) TextColor(11); else TextColor(12);
         a[n][m]=OX(i);
         cout<<a[n][m];
         i+=1;
    }
    else a[n][m];
    TextColor(7);
}

void AnSangTrai(){
    x-=1;
    if (x<13) x=13;
}

void AnSangPhai(){
    x+=1;
    if (x>=55) x=55;
}

void AnLenTren(){
    y-=1;
    if (y<3) y=3;
}

void AnXuongDuoi(){
    y+=1;
    if (y>=21) y=21;
}

void ConTro(short x, short y){
    Goto(x,y);
    n=x;m=y;
}

void ThongTinTrauDau(){
    TextColor(7);
    cout << "Q: Exit";
    cout<<"     M, E: Play.";
    Goto(0,4); TextColor(11);cout<<"Player 1"<<endl<<"A,D,W,S"<<endl<<endl;
               cout<<"Player 2"<<endl<<"Arrow "<<endl<<"keys"<<endl<<endl;
    TextColor(14); cout<<"Note:"<<endl<<"Block" << endl << "2 sides "<<endl<<"still counts";
    TextColor(7);
}

short DKOChienThang(){

    m1=m; n1=n;
    while (a[n1][m]=='O')
        n1++;
    n1--;

    if ((a[n1][m]=='O') && (a[n1+1][m]=='O') && (a[n1+2][m]=='O') && (a[n1+3][m]=='O') && (a[n1+4][m]=='O')) return 1; else
    if ((a[n1][m]=='O') && (a[n1-1][m]=='O') && (a[n1-2][m]=='O') && (a[n1-3][m]=='O') && (a[n1-4][m]=='O')) return 1;

    m1=m; n1=n;
    while (a[n][m1]=='O')
        m1++;
    m1--;

    if ((a[n][m1]=='O') && (a[n][m1+1]=='O') && (a[n][m1+2]=='O') && (a[n][m1+3]=='O') && (a[n][m1+4]=='O')) return 1; else
    if ((a[n][m1]=='O') && (a[n][m1-1]=='O') && (a[n][m1-2]=='O') && (a[n][m1-3]=='O') && (a[n][m1-4]=='O')) return 1;

    m1=m; n1=n;
    while (a[n1][m1]=='O'){
        m1++; n1++;
    }
    m1--; n1--;
    if ((a[n1][m1]=='O') && (a[n1+1][m1+1]=='O') && (a[n1+2][m1+2]=='O') && (a[n1+3][m1+3]=='O') && (a[n1+4][m1+4]=='O')) return 1; else
    if ((a[n1][m1]=='O') && (a[n1-1][m1-1]=='O') && (a[n1-2][m1-2]=='O') && (a[n1-3][m1-3]=='O') && (a[n1-4][m1-4]=='O')) return 1;
    m1=m; n1=n;
    while (a[n1][m1]=='O'){
        n1++; m1--;
    }
    n1--; m1++;
    if ((a[n1][m1])=='O' && (a[n1+1][m1-1])=='O' && (a[n1+2][m1-2])=='O' && (a[n1+3][m1-3])=='O' && (a[n1+4][m1-4]=='O' )) return 1; else
    if ((a[n1][m1])=='O' && (a[n1-1][m1+1])=='O' && (a[n1-2][m1+2])=='O' && (a[n1-3][m1+3])=='O' && (a[n1-4][m1+4]=='O' )) return 1;

    return 0;
}

short DKXChienThang(){

    m1=m; n1=n;
    while (a[n1][m]=='X') {
        n1++;
    }
    n1--;

    if ((a[n1][m]=='X') && (a[n1+1][m]=='X') && (a[n1+2][m]=='X') && (a[n1+3][m]=='X') && (a[n1+4][m]=='X')) return 1; else
    if ((a[n1][m]=='X') && (a[n1-1][m]=='X') && (a[n1-2][m]=='X') && (a[n1-3][m]=='X') && (a[n1-4][m]=='X')) return 1;

    m1=m; n1=n;
    while (a[n][m1]=='X') {
        m1++;
    }
    m1--;
    if ((a[n][m1]=='X') && (a[n][m1+1]=='X') && (a[n][m1+2]=='X') && (a[n][m1+3]=='X') && (a[n][m1+4]=='X')) return 1; else
    if ((a[n][m1]=='X') && (a[n][m1-1]=='X') && (a[n][m1-2]=='X') && (a[n][m1-3]=='X') && (a[n][m1-4]=='X')) return 1;

    m1=m; n1=n;
    while (a[n1][m1]=='X'){
        m1++; n1++;
    }
    m1--; n1--;
    if ((a[n1][m1]=='X') && (a[n1+1][m1+1]=='X') && (a[n1+2][m1+2]=='X') && (a[n1+3][m1+3]=='X') && (a[n1+4][m1+4]=='X')) return 1; else
    if ((a[n1][m1]=='X') && (a[n1-1][m1-1]=='X') && (a[n1-2][m1-2]=='X') && (a[n1-3][m1-3]=='X') && (a[n1-4][m1-4]=='X')) return 1;

    m1=m; n1=n;
    while (a[n1][m1]=='X'){
        n1++; m1--;
    }
    n1--; m1++;
    if ((a[n1][m1])=='X' && (a[n1+1][m1-1])=='X' && (a[n1+2][m1-2])=='X' && (a[n1+3][m1-3])=='X' && (a[n1+4][m1-4]=='X' )) return 1; else
    if ((a[n1][m1])=='X' && (a[n1-1][m1+1])=='X' && (a[n1-2][m1+2])=='X' && (a[n1-3][m1+3])=='X' && (a[n1-4][m1+4]=='X' )) return 1;

    return 0;
}

void ChienThang(){
    TextColor(12);
    if ((DKOChienThang()==1)){
        Goto(26,7);
        cout<<"O IS THE WINNERRR !!";
        p1++;
        for(int i=13;i<=55;i++)
        	for(int j=3;j<=21;j++)	a[i][j]=NULL;
        tieptuc();
    }
    else
        if ((DKXChienThang()==1)){
            Goto(26,7);
            cout<<"X IS THE WINNERRR !!";
            p2++;
            for(int i=13;i<=55;i++)
        		for(int j=3;j<=21;j++)	a[i][j]=NULL;
            tieptuc();
        }
    TextColor(7);
}

void TuongTacPhim(){
    key=getch();
    if (key=='a' || key=='A' || int (key==75)) AnSangTrai(); else
    if (key=='d' || key=='D' || int (key==77)) AnSangPhai(); else
    if (key=='w' || key=='W' || int (key==72)) AnLenTren(); else
    if (key=='s' || key=='S' || int (key==80)) AnXuongDuoi(); else
    if (key=='e' || key=='E' || key=='m' || key=='M') VeOX();
}

main(){
    MoDau();

}

void MoDau(){
    system("cls");
    TextColor(7);
    cout<<"1. Play."<<endl;
    cout<<"2. Instruction."<<endl;
    cout<<"3. About."<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Menu: ";
    LuaChon=getch();
    cout<<char (LuaChon);
    Sleep(200);
    if (LuaChon== '1') Choi2Nguoi(); else
    if (LuaChon== '2') HuongDan(1); else
    if (LuaChon== '3') ThongTin(); else Thoat();

}

void VeKhung(){
     short i,n=5; TextColor(6);

    for (i=0; i<45; i++){
        Goto(12+i,2);
        cout<< char(220);
        Goto(12+i,22);
        cout << char(223);
    }
    for (i=3; i<=21; i++) {
        Goto(12,i);

        cout<<char(219);
        Goto(56,i);
        cout << char(219);
    }

    for (i=13; i<=55;i++){
        for(int j=3; j<=21; j++){
        if(i%2==0){
    if(j%2==0){
     Goto(i,j);
     TextColor(0);
     cout << char(219);
    }
    else{
     Goto(i,j);
     TextColor(7);
     cout << char(219);
    }
   }
   else{
    if(j%2==0){
     Goto(i,j);
     TextColor(7);
     cout << char(219);
    }
    else{
     Goto(i,j);
     TextColor(0);
     cout << char(219);
    }
   }
        }
    }
    Goto(12,24);



}

void Choi2Nguoi(){
    system("cls");
    HuongDan(2);
    system("cls");
    VeKhung();
    x=n=13; y=m=3;
    i=0;
    ThongTinTrauDau();
	khungtiso();
	do{
        ConTro(x,y);
        ChienThang();
        TuongTacPhim();
    } while (key != 'q' && key != 'Q');
    Thoat();

}



void HuongDan(short k){
    cout<<"                            Instruction"<<endl<<endl;
    cout<<"Use";
    TextColor(12);
    cout<<" Arrow keys";
    TextColor(7);
    cout<<" or";
    TextColor(12);
    cout<<" A,D,W,S";
    TextColor(7);
    cout<<" to move. Use";
    TextColor(12);
    cout<<" E";
    TextColor(7);
    cout<<" and";
    TextColor(12);
    cout<<" M";
    TextColor(7);
    cout<<" to play."<<endl<<"Have fun !"<<endl;;
    system("pause");
    if (k==1) MoDau();
}

void ThongTin(){
    TextColor(11);
    cout<<endl;
    cout<<"Name: Caro"<<endl;
    cout<<"Ver: 1.0"<<endl;
    system("pause");
    TextColor(7);
    MoDau();
}

void Thoat(){
    TextColor(10);
    if (p1>p2) {Goto(27,10); cout << "Player 1 won !";}
    else if (p1<p2) {Goto(27,10); cout << "Player 2 won !";}
    else {Goto(27,10); cout << "It's a draw !";}
    Goto(27,11);
    cout<<"SEE YOU NEXT TIME !!!";
    getch();
    ExitProcess(0);
}
void tieptuc()
{
     Goto(15,9);
  cout << "DO YOU WANT TO CONTINUE ? (Y: Yes/N: No)";
  char ch = getch();
  if((ch=='y')||(ch=='Y')){
   Goto(10,1);
   thaydoiluot++;
       if(thaydoiluot%2==0) luot = 0;
       else luot = 1;
      cout << "                                  ";
  system("cls");
	VeKhung();
    x=n=13; y=m=3;
    i=0;
    ThongTinTrauDau();
	khungtiso();
	do{

        ConTro(x,y);
        ChienThang();
        TuongTacPhim();
    } while (key != 'q' && key != 'Q');
  }
  else{
   Thoat();
  }
}
void khungtiso(){
 Goto(58,3);
 TextColor(10);
 cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) << char(220) ;
 TextColor(13);
 cout << " Score ";
 TextColor(10);
 cout  << char(220)  << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
 Goto(60,4);
 TextColor(14);
 cout << "player1    player2";

 for(int i=0; i<=21 ;i++){
  Goto(58+i,4+18);
  TextColor(10);
  cout << char(223);
 }
 for(int i=4 ; i<= 21 ;i++){
  Goto(58,i);
  cout << char(219);
  Goto(58+16+5,i);
  cout << char(219);
  Goto(58+8+2,i);
  cout << char(219);
 }
 tiso();
}
void tiso(){
 for(int i=0 ;i < p1 ;i++){
  Goto(61+2,6+i);
  TextColor(11);
  cout << "O";
 }
 for(int i=0 ;i < p2 ;i++){
  Goto(61+13,6+i);
  TextColor(12);
  cout << "X";
 }
}
