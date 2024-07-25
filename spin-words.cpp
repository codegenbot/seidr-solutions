int main() {
    string input;
    getline(cin, input);
    
    stringstream ss(input);
    string word;
    bool first = true;
    while (ss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << (first ? "" : " ") << word;
        first = false;
    }
    
    return 0;
}