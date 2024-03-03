#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//writn  a program to read a BillValue and add service fee 10% and sales tax 14% and print the total bill on the scren
float ReadPositiveNumber (string message){
    float number = 0 ;
    do {
        cout << message << endl ;
        cin>> number ;
    }while(number<=0) ;
    return number ;
}
float TotalBillAfterServiceAndTax (float BillValue){
    BillValue = BillValue * 1.1 ;
    BillValue = BillValue * 1.16 ;
    return BillValue ;
}
int main (){
    float BillValue = ReadPositiveNumber("pleas enter BillValue here");
    cout << " the bill Vlaue is = " << BillValue<<endl;
    cout << " total BillValue after service fee and Tax " << TotalBillAfterServiceAndTax(BillValue)<<endl;
}