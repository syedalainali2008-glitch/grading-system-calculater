#include<iostream>
using namespace std;
int main()
// {
//     char value;
//     cout<<"ENTER YOUR CHARACTER:";
//     cin>>value;
//     if (value>=65 && value<=90){
//         cout<<"THE CHARACTER UPPERCASE:";
//     }
//     else if(value>=97 && value<=122){
//         cout<<"THE CHARACTER  IS LOWERCASE:";
//     }
//     return 0;
    
// }
{
    int balance=1230;
    string enter;
    cout<<"ENTER WHAT YOU WANT CHECK BALANCE, DEPOSIT,WITHDREW: ";
    getline(cin,enter);
    if (enter=="WITHDREW"){
        int out_money;
        cout<<"ENTER HOW MUCH MONEY YOU WANT TO WITHDREW:";
        cin>>out_money;
        cout<<"THIS IS YOU MONEY AFTER WITHDREW:"<<(balance-out_money)<<endl;
    }
    else if(enter=="DEPOSIT"){
        int in_money;
        cout<<"ENTER HOW MUCH MONEY YOU WANT DEPOSIT:";
        cin>>in_money;
        cout<<"THIS IS YOUR MONEY AFTER DEPOSIT:"<<(balance+in_money)<<endl;
        
    }
    else if(enter=="CHECK BALANCE"){
        cout<<"THIS IS YOUR BALANCE:"<<balance<<endl;
        
    }
    return 0;
