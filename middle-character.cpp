int main() {
    string input;
    cin >> input;
    
    if (input.size() % 2 == 1) {
        cout << input[input.size() / 2] << endl;
    } else {
        cout << input.substr(input.size() / 2 - 1, 2) << endl;
    }
    
    return 0;
}