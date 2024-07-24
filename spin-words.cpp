int main() {
    string input;
    getline(cin, input);
    
    istringstream iss(input);
    string word;
    bool firstWord = true;
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << (firstWord ? "" : " ") << word;
        firstWord = false;
    }
    
    return 0;
}