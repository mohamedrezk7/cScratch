#include <iostream>
#include <cmath>
#include <string>
using namespace std;
enum en_daysOfWeek {saturday=1,sunday=2,monday=3,tuseday=4,wednesday=5,thursday=6,friday=7};
void ShowWeekDayMenu(){
    cout<<"***************"<<endl;
    cout<<"(1)saturday"<<endl;
    cout<<"(2)sunday"<<endl;
    cout<<"(3)monday"<<endl;
    cout<<"(4)tuseday"<<endl;
    cout<<"(5)wednesday"<<endl;
    cout<<"(6)thursday"<<endl;
    cout<<"(7)friday"<<endl;
    cout<<"***************"<<endl;
};
en_daysOfWeek ReadweekDay(){
    en_daysOfWeek day;
    int wd;
    cin>>wd;
    return (en_daysOfWeek)wd;
};
string GetWeekDayName(en_daysOfWeek day){
    switch (day)
    {
    case en_daysOfWeek::saturday :
        return "saturday";
        break;

    case en_daysOfWeek::sunday : 
        return "sunday";
        break;

        case en_daysOfWeek::monday :
        return "monday";
        break;

        case en_daysOfWeek::tuseday :
        return "tuseday";
        break;

        case en_daysOfWeek::wednesday :
        return "wednesday";
        break;

        case en_daysOfWeek::thursday :
        return "thursday";
        break;

        case en_daysOfWeek::friday :
        return "friday";
        break;

    default:
        return "wrong day";
        break;
    }
};
int main(){
     
    ShowWeekDayMenu();
    string day=(GetWeekDayName(ReadweekDay()));
    cout<<"the day is = "<<day<<endl;

    return 0;
};