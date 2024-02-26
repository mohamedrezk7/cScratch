#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum en_daysOfWeek {saturday=1,sunday=2,monday=3,tuseday=4,wednesday=5,thursday=6,friday=7};
int main(){
    cout<<"***************"<<endl;
    cout<<"(1)saturday"<<endl;
    cout<<"(2)sunday"<<endl;
    cout<<"(3)monday"<<endl;
    cout<<"(4)tuseday"<<endl;
    cout<<"(5)wednesday"<<endl;
    cout<<"(6)thursday"<<endl;
    cout<<"(7)friday"<<endl;
    cout<<"***************"<<endl;

    int x;
    en_daysOfWeek day;
    cin>>x;
    day=(en_daysOfWeek)x;
    switch (day)
    {
    case en_daysOfWeek::saturday :
        cout<<"the day is saturday "<<endl;
        break;

    case en_daysOfWeek::sunday : 
        cout<<"the day is sunday "<<endl;
        break;

        case en_daysOfWeek::monday :
        cout<<"the day is monday "<<endl;
        break;

        case en_daysOfWeek::tuseday :
        cout<<"the day is tuseday "<<endl;
        break;

        case en_daysOfWeek::wednesday :
        cout<<"the day is wednesday "<<endl;
        break;

        case en_daysOfWeek::thursday :
        cout<<"the day is thursday  "<<endl;
        break;

        case en_daysOfWeek::friday :
        cout<<"the day is friday "<<endl;
        break;

    default:
    cout<<"the day wrong "<<endl;
        break;
    }

    return 0;
};