int main() {
    string input;
    getline(cin, input);
    
    istringstream iss(input);
    string word;
    vector<string> words;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        words.push_back(word);
    }
    
    for (int i = 0; i < words.size(); ++i) {
        cout << words[i];
        if (i < words.size() - 1) {
            cout << " ";
        }
    }
    
    return 0;
}