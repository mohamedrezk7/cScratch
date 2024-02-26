#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void ReadArrayData(int array1[10], int& length){

    cout<<"pleas enter array length from  to 100 "<<endl;
    cin>>length;
    for (int i=0 ; i<=length-1 ;i++){

        cout<<"pleas enter nmber  "<< i+1 << endl;
        cin>>array1[i];
    };
};
void PrintArrayData(int arr[10] , int leng){
        for (int x=0 ; x<=leng-1 ; x++){

            cout<<"array number ["<< x <<"] : "<<arr[x]<<endl;
        };
        // cout<<"array number 0 : "<<arr[0]<<endl;
        // cout<<"array number 1 : "<<arr[1]<<endl;
        // cout<<"array number 2 : "<<arr[2]<<endl;
        // cout<<"array number 3 : "<<arr[3]<<endl;
        // cout<<"array number 4 : "<<arr[4]<<endl;
};
int CalculatArraySum(int array[100],int length){
    int sum=0;
    for (int i=0;i<=length-1;i++){
        sum += array[i];
    }
    return sum;
};
float CalculatArrayAverage(int array2[100], int length2){
    float avr;
        avr=(float)CalculatArraySum(array2,length2)/length2;
    
    return avr;
};
int main(){
    int array[10],length1;
    ReadArrayData(array,length1);
    PrintArrayData(array,length1);
    int sum = CalculatArraySum(array,length1);
    cout <<"the sum is = "<<sum<<endl;
    cout <<"the average is = "<<CalculatArrayAverage(array,length1)<<endl;

};