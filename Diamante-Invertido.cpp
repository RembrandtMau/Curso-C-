
#include <iostream>
using namespace std;

int main() {
    int altura = 10;

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura - i - 1; j++) {
            cout << "*";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << " ";
        }
        for (int l = 0; l < altura - i - 1; l++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = altura - 2; i >= 0; i--) {
        for (int j = 0; j < altura - i - 1; j++) {
            cout << "*";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << " ";
        }
        for (int l = 0; l < altura - i - 1; l++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}