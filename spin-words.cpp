int main() {
    string line;
    getline(cin, line);
    
    istringstream iss(line);
    string word;
    bool first = true;
    
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        
        cout << (first ? "" : " ") << word;
        first = false;
    }
    
    cout << endl;
    
    return 0;
}