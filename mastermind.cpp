```int main() {
    const char* code = "abcD";
    const char* guess = "aBcd";
    int result = mastermind(code, guess);
    cout << "Black pegs: " << (result / 2) << ", White pegs: " << (result % 2) << endl;
}