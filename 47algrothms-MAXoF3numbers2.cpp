#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//write a programe get tow numbers then retyrn wich of them bigeer
struct stTowNum {
    int num1 ;
    int num2 ;
    int num3 ;
};
void ReadNumbers (int arr[10] , int len){
    cout <<"pleas enter  numbers to print max of them "<<endl;
    cout <<"*********************************** "<<endl;
    for (int i =0 ; i<=len-1 ; i++){
    cout <<"pleas enter number = "<<i+1<<endl;
    cin >>arr[i];
    }
}
int CeckMax (int arr[10] ){
        if (arr[0]> arr[1] && arr[0>arr[2]]){
            return  (int) arr[0];
        }
        else if( arr[1] > arr[0] && arr[1]>arr[2]){
        return (int) arr[1]; 
        }
        else {return (int) arr[2];
        }
        
}
void PrintResult (int arr){
        cout << "the max of three numbers is = " << arr <<endl;
}
int main (){
    int arr[10] , len=3;
    ReadNumbers(arr , len);
    PrintResult(CeckMax(arr));
return 0 ;    
}