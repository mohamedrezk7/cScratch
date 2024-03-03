#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//write a program calculat piggy bank
/*qerch  =1   Q 
5len     =5   Q
bariza   =10  Q
rob3     =25  Q
nos      =50  Q
pound    =100 Q */
struct stPiggy {
    int qerch , chlen , bariza , rob3 , nos , pound; 
};
stPiggy ReadPiggyBankContent (){
    stPiggy piggy;
    cout << "pleas enter quantity of qrech "<<endl;
    cin>>piggy.qerch;
    cout << "pleas enter quantity of chlen "<<endl;
    cin>>piggy.chlen;
    cout << "pleas enter quantity of bariza  "<<endl;
    cin>>piggy.bariza;
    cout << "pleas enter quantity of rob3 "<<endl;
    cin>>piggy.rob3;
    cout << "pleas enter quantity of nos  "<<endl;
    cin>>piggy.nos;
    cout << "pleas enter quantity of pound  "<<endl;
    cin>>piggy.pound;
    return piggy;
}
int CalculateTotalQerch (stPiggy piggy){
    int totalQerch = piggy.qerch *1 + piggy.chlen*5 + piggy.bariza*10 + piggy.rob3*25
    + piggy.nos * 50 + piggy.pound *100 ;
    return totalQerch;
}
int main (){
    int totalQrech = CalculateTotalQerch(ReadPiggyBankContent());
    cout <<"total Qerch = "<<totalQrech<<endl;
    cout <<"total pound  = "<<(float)totalQrech / 100 <<endl;
}
