#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//writn  a program to read a BillValue and add service fee 10% and sales tax 14% and print the total bill on the scren
float ReadBillValue (string message){
    float BillValue = 0 ;
    cout << message << endl ;
    cin  >> BillValue ;
    return  BillValue ;
}  
float CalculateServiceFee (float BillValue){
    float ServiceFee = 0 ;
    ServiceFee = BillValue * 0.1 ;
    return   ServiceFee ; 
}
float CalculatSalesTax (float servicefee , float BillValue){
    return ((BillValue+servicefee) * 0.16 );
}
float TotalBillValueAfter_SeviceFee_SalesTax (float BillValue){
    float servicefee = CalculateServiceFee(BillValue);
    float SalesTax   = CalculatSalesTax(CalculateServiceFee(BillValue) , BillValue);
    float total      = BillValue + servicefee + SalesTax;
    return total ;  
};
void PrintResult (float BillValue){
    cout << " the BillValue = " <<BillValue<<endl;
    cout << " the amount of Service Fee is =  " <<CalculateServiceFee(BillValue)<<endl;
    cout << " total Amount after added service Fee is = " << BillValue + CalculateServiceFee(BillValue)<<endl;
    cout << " the amount Of Sales Tax = " <<CalculatSalesTax(CalculateServiceFee(BillValue), BillValue)<<endl;
    cout << " Tota BillValue after added sales Tax = " <<TotalBillValueAfter_SeviceFee_SalesTax(BillValue); 
}
int main (){
    float BillValue = ReadBillValue("pleas enter BillValue To calculate :service Fee : & : sales Tax:");
    PrintResult(BillValue);
}