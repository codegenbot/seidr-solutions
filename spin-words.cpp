int main() {
    string input;
    getline(cin, input);
    
    istringstream iss(input);
    string word;
    bool first = true;
    while (iss >> word) {
        if (word.size() >= 5) {
            if (!first) {
                cout << " ";
            }
            reverse(word.begin(), word.end());
            cout << word;
            first = false;
        } else {
            if (!first) {
                cout << " ";
            }
            cout << word;
            first = false;
        }
    }
    
    return 0;
}