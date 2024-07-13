int main() {
    string input, word, result;
    getline(cin, input);
    stringstream ss(input);
    
    while (ss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    cout << result;
    
    return 0;
}