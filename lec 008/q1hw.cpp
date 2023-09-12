#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout<<"Enter amount: "<<endl;
    int Rs100,Rs50,Rs20,Rs1;
    cin>>amount; // eg - 1330
    
    switch (1)
    {
    case 1: Rs100=amount/100; //  1300/100 = 13
            amount=amount-Rs100*100; //amount = 1300-13*100 =  30
            cout<<"Total no. of notes of 100 : "<<Rs100<<endl; // prints 13
            
    case 2: Rs50=amount/50; // 30/50 is np so go to case 3
            amount=amount-Rs50*50;
            cout<<"Total no. of notes of 50 : "<<Rs50<<endl;

    case 3: Rs20=amount/20; //30/20 = 1
            amount=amount-Rs20*20; // amount = 30 - 1*20 = 10
            cout<<"Total no. of notes of 20 : "<<Rs20<<endl; // 1

    case 4: Rs1=amount/1; // 10/1=10
            amount=amount-Rs1*1; // amount = 10-10*1 = 0 (finished all the money)
            cout<<"Total no. of notes of 1 : "<<Rs1<<endl; // 10 
    }
    return 0;
}