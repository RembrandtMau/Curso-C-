#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 11; ++i) 
    {
        for (int j = 0; j < 11; ++j) 
        {
            if(i >= j){
            cout << "*";
            }else{
            cout << " ";
            }
        }
        
    cout << "\n";
        for (int j = 0; j < 11; ++j) 
        {
            if( 10 <= i + j){
            cout << "*";
            }else{
            cout << " ";
            }
        }

    }


    for (int i = 0; i < 11; ++i) 
    {

        for (int j = 0; j < 11; ++j) 
        {
            if(i + j <= 10 ){
            cout << "*";
            }else{
            cout << " ";
            }
        }
    cout << "\n";
    for (int j = 0; j < 11; ++j) 
        {
            if(i <= j){
            cout << "*";
            }else{
            cout << " ";
            }
        }

    }

    return 0;
}

