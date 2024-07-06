#include <iostream>
#include <string>
using namespace std;
int main() {
   string code, guess;
   int whitePegs = 0, blackPegs = 0;
   while (getline(cin, code)) {
       getline(cin, guess);
       for (int i = 0; i < code.length(); i++) {
           if (code[i] == guess[i]) {
               blackPegs++;
           } else if (code.find(guess[i]) != string::npos) {
               whitePegs++;
           }
       }
       if (blackPegs == 0) {
           cout << "1 " << whitePegs << endl;
       } else {
           cout << whitePegs << " " << blackPegs << endl;
       }
   }
   return 0;
}