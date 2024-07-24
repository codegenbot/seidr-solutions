int main() {
    string input;
    getline(cin, input);
    
    string result = "";
    string word = "";
    
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] != ' ') {
            word += input[i];
        } else {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        }
    }
    
    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;
    
    cout << result;
    
    return 0;
}