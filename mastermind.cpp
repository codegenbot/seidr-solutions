#include <string>
using namespace std;
int main() {
    string mastermind_code = "RRRR";
    string guess = "RRRR";
    int white_pegs = 0;
    int black_pegs = 0;

    for (int i = 0; i < guess.length(); i++) {
        if (guess[i] == mastermind_code[i]) {
            black_pegs++;
        } else if ((mastermind_code[i] == 'R' && guess[i] == 'G') || (mastermind_code[i] == 'G' && guess[i] == 'R')) {
            white_pegs++;
        }
    }

    cout << black_pegs << " " << white_pegs << endl;
    return 0;
}