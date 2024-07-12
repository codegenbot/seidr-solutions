int main() {
    string input;
    getline(cin, input);
    
    string word;
    stringstream ss(input);
    while (ss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
    }
    
    return 0;
}