#include <tuple>
#include <vector>
#include <iostream>
#include <string>
#include <utility>

using namespace std;

std::tuple<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        bool inCode = false;
        for (int j = 0; j < 4; j++) {
            if (guess[i] == code[j]) { 
                inCode = true;
                if (j == i) { 
                    black++;
                    break;
                } else {
                    white++;
                }
            }
        }
    }

    return std::make_tuple(white, black);
}

int main() {
    string code = "RGOR";
    string guess = "BRBB";
    tie<int, int>(int white, int black) = mastermind(code, guess);
    cout << "White pegs: " << white << ", Black pegs: " << black << endl;
    return 0;
}