#include<iostream>
using namespace std;

int main(){

    int a = 4;
    int  b= 6;

    cout<<" a&b "<< (a&b) << endl;
    cout<<" a|b "<< (a|b) << endl;
    cout<<" ~a "<< (~a) << endl;
    cout<<" a^b "<< (a^b) << endl;

cout<<"\n";

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;

    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

cout<<"\n";

    int i =7;

    cout<<(++i); // 8
    cout<<(i++); //8, i=9

    cout<<(i--); //9, i=8
    cout<<(--i); //7, i=7

}