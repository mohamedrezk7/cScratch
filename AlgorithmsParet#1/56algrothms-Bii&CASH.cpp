#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// write a program to read a total BIii and CASHPAID and calculate the reminder to pay back
float ReadTotalBill () {
    float ToltalBill = 0 ;
    cout <<"pleas enter total bill here"<<endl;
    cin>> ToltalBill ;
    return ToltalBill ;

}
float ReadCashPaid (){
    float CashPaid = 0 ;
    cout <<"pleas enter cashpaid here"<<endl;
    cin >> CashPaid ;
    return CashPaid ;
}
float CalculatTehReminder (float totalbiil , float cashpaid){
    float reminder = 0 ;
    reminder = cashpaid - totalbiil ;
    return reminder ;
}
int main (){
    float totalbill = 0 , cashpaid = 0 ;
    totalbill = ReadTotalBill();
    cashpaid  = ReadCashPaid();
    cout << " the reminder is = " <<CalculatTehReminder(totalbill , cashpaid)<<endl;
    
}