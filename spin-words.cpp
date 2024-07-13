int main() {
    string line, word;
    getline(cin, line);
    
    istringstream iss(line);
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        cout << word << " ";
    }
    
    return 0;
}