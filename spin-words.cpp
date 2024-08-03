int main() {
    string input;
    getline(cin, input);
    
    stringstream ss(input);
    string word;
    while (ss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
    }
    
    return 0;
}