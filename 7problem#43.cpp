 #include <iostream>
#include <cmath>
using namespace std;
int main(){

    //  Seconds to Days Hours Minutes Seconds 

    int NumberOfDays , NumberOfHours , NumberOfMinutes , NumberOfSeconds , Seconds ,
    SecondePerDay = 24*60*60,
    SecondePerHours = 60*60,
    SecondePerMinut = 60;
    cout<<"pleas enter number of seconds"<<endl;
    cin>>Seconds;
    NumberOfDays = floor (Seconds/SecondePerDay);
   int reminder = Seconds % SecondePerDay;
   NumberOfHours =floor(reminder/SecondePerHours);
   reminder = reminder % SecondePerHours;
   NumberOfMinutes = floor(reminder/SecondePerMinut);
   reminder = reminder % SecondePerMinut;
   NumberOfSeconds = reminder;

    cout<<NumberOfDays<<":"<<NumberOfHours<<":"<<NumberOfMinutes<<":"<<NumberOfSeconds<<endl;
    

}