#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//writn  a program to read a nimber of hours and calculate number of weeks and number of days included in that number
float ReadPositiveNumber (string message){
    float number = 0 ;
    do {
        cout << message << endl ;
        cin>> number ;
    }while(number<=0) ;
    return number ;
}
float CalNumOFDaysFromHours (float TotalOfHours){
     const float daysHours = 24;
     float numberOFDays = TotalOfHours /daysHours ;
     return numberOFDays ;
}
float CalNumberOfWeeks (float NumberOfDays){
    const float WeekDays = 7 ;
    float numberOfWeeks = NumberOfDays / WeekDays ;
    return numberOfWeeks ;
}
void PrintResult (float number , string message ){
    cout << message << number <<endl;
}
int main (){
    float numberOfHours ; 
    numberOfHours = ReadPositiveNumber("pleas enter numberOFHours ");
    PrintResult(CalNumOFDaysFromHours(numberOfHours), "number of Days is = ");
    PrintResult(CalNumberOfWeeks(CalNumOFDaysFromHours(numberOfHours)) , "the number of weeks is = ");
}