int main() {
    string input;
    getline(cin, input);

    string word;
    string result = "";
    
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] != ' ') {
            word += input[i];
        } else {
            if (word.size() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + ' ';
            word = "";
        }
    }
    
    if (word.size() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;
    
    cout << result;
    
    return 0;
}