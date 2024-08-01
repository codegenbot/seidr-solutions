```c++
int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << "\n";
    cout << whitePegs(code, guess) << "\n";
    return 0;
}