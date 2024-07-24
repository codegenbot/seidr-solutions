int main() {
    string input;
    getline(cin, input);
    
    string word;
    string result = "";
    
    for (int i = 0; i <= input.length(); ++i) {
        if (i == input.length() || input[i] == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + (i == input.length() ? "" : " ");
            word = "";
        } else {
            word += input[i];
        }
    }
    
    cout << result << endl;
    
    return 0;
}