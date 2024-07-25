int main() {
    string input, word;
    getline(cin, input);
    
    stringstream ss(input);
    while (ss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}