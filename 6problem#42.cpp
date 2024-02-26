 #include <iostream>
#include <cmath>
using namespace std;
int main(){

    // Problem #42 - Task Duration In Seconds 

    int NumberOfDays , NumberOfHours , NumberOfMinutes , NumberOfSeconds;
    cout << "pleas enter number of days " <<endl;
    cin>>NumberOfDays;
    cout << "pleas enter number of hours " <<endl;
    cin>>NumberOfHours;
    cout << "pleas enter number of minutes " <<endl;
    cin>>NumberOfMinutes;
    cout << "pleas enter number of secondes " <<endl;
    cin>>NumberOfSeconds;
    int TotalSeconds;
    TotalSeconds =( (NumberOfDays * 24 * 60 * 60 ) + ( NumberOfHours * 60 * 60 ) + 
    (NumberOfMinutes * 60 ) + (NumberOfSeconds) );
    cout<<TotalSeconds<<"\tSeconds"<<endl;

}