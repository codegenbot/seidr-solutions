int main() {
    string input, word, result;
    getline(cin, input);
    
    stringstream ss(input);
    
    while(ss >> word) {
        if(word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove trailing space
    
    cout << result << endl;
    
    return 0;
}