#include <iostream>
#include <string>
using namespace std;

int main() {
    string code = "BYWB";
    string guess = "GOWB";
    
    int blackPegs = 0, whitePegs = 0;
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            int j = 0;
            while (j < 4 && code[j] != guess[i]) {
                j++;
            }
            if (j < 4) {
                whitePegs++;
            }
        }
    }
    
    cout << blackPegs << " " << whitePegs << endl;
    return 0;
}