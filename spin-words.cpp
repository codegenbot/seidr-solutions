int main() {
    string input;
    getline(cin, input);
    string word = "";
    string result = "";
    
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == ' ' || i == input.length() - 1) {
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; --j) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            if (i != input.length() - 1) {
                result += ' ';
            }
            word = "";
        } else {
            word += input[i];
        }
    }
    
    cout << result << endl;
    
    return 0;
}