#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//writ aprogram act like this **********
                        //    *********
                        //    ********
                        //    *

int main (){
    for (int i=10 ; i>=1 ; i--){

        for (int x=1 ; x<=i ; x++){
            cout<<"*";
        
        }
        cout<<"\n";

    }
    cout<<"_________________\n";
     for (int i=10 ; i>=1 ; i--){

        for (int x=1 ; x<=i ; x++){
            cout<<x;
        
        }
        cout<<"\n";

    }
    cout<<"_________________\n";
     for (int i=1 ; i<=10 ; i++){

        for (int x=1 ; x<=i ; x++){
            cout<<x;
        
        }
        cout<<"\n";

    }

    cout<<"_________________\n";
     for (int i=65 ; i<=90 ; i++){

        for (int x=65 ; x<=i ; x++){
            cout<<char(x);
        
        }
        cout<<"\n";

    }
    // write a program act lik this 12345678910
                                //  2345678910
                                //  345678910
     cout<<"_________________\n";
     for (int i=1 ; i<=10 ; i++){

            for (int x=i ; x<=10 ; x++){
                cout<<x;
            }

     cout<<"\n";    
     }

                            
};