#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// write a program print the multiplication table frome 1 to 10 as follows 
void Print1TableHeader (){
    cout << "\n\n\t\t\t multiplication from 1 To 10 \n\n";
    cout <<"\t";
    for (int i =1 ; i<=10 ; i++)
    {
        cout << i << "\t";
    }        
    cout <<"\n___________________________________________________________________________________\n";
}
string ColumSperator (int i ){
    if (i<10)
    return "    |";
    else 
    return "   |";

}
void PrintMultiplationTable (){
    Print1TableHeader();
    for (int i =1 ; i<=10 ; i++){
        cout << i <<ColumSperator(i)<<"\t";
        for (int j =1 ; j <=10 ; j++){
            cout <<i*j<<"\t";
        }
        cout <<endl;
    }
}
int main (){
    PrintMultiplationTable();
    return 0 ;
}