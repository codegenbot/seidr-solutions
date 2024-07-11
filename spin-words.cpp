int main() {
    string input;
    getline(cin, input);
    
    string word, result;
    stringstream ss(input);
    bool firstWord = true;
    
    while (ss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        
        if (firstWord) {
            result += word;
            firstWord = false;
        } else {
            result += " " + word;
        }
    }
    
    cout << result << endl;
    
    return 0;
}