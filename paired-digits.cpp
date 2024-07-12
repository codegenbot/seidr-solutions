int main() {
    string input;
    cin >> input;
    
    int sum = 0;
    for (int i = 0; i < input.size() - 1; ++i) {
        if (input[i] == input[i + 1]) {
            sum += input[i] - '0';
        }
    }
    
    cout << sum << endl;
    
    return 0;
}