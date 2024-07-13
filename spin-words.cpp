int main() {
    string line;
    getline(cin, line);
    
    string word;
    for (int i = 0; i < line.length(); ++i) {
        if (line[i] != ' ') {
            word += line[i];
        } else {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            cout << word << " ";
            word = "";
        }
    }

    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    cout << word;
    
    return 0;
}