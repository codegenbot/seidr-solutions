```cpp
int code_counts[6] = {0};

int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;

    cout << "Enter the Mastermind code: ";
    cin >> code;

    cout << "Enter your guess: ";
    cin >> guess;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else if (count(code.begin(), code.end(), guess[i]) > 0) {
            whitePegs++;
        }
    }

    cout << "Black pegs: " << blackPegs << endl;
    cout << "White pegs: " << whitePegs << endl;

    return 0;
}