int main() {
    string input;
    getline(cin, input);
    
    string word, result;
    istringstream iss(input);
    
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove trailing space
    
    cout << result;
    
    return 0;
}