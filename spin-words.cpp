int main() {
    string input;
    getline(cin, input);
    
    string output = "";
    string word = "";
    
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + " ";
            word = "";
        } else {
            word += input[i];
        }
    }
    
    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    output += word;
    
    cout << output << endl;
    
    return 0;
}