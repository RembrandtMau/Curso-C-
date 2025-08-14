#include <iostream>

using namespace std;

int main() {

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        for (int l = 0; l < 10 - i - 1; l++) {
            cout << " ";
        }
        cout << "\n";
    }
    for (int i = 10 -2 ; i >= 0; i--) {
        for (int j = 0; j < 10 - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        for (int l = 0; l < 10 - i - 1; l++) {
            cout << " ";
        }
        cout << "\n";
    }

        return 0;

    
}