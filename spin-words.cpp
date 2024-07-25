int main() {
    string input, word, result;
    getline(cin, input);
    istringstream iss(input);
    
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove the trailing space
    cout << result << endl;
    
    return 0;
}