int main() {
    string input, word;
    getline(cin, input);
    
    istringstream iss(input);
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
    }
    
    return 0;
}