int main() {
    string input;
    getline(cin, input);
    
    istringstream iss(input);
    string word;
    string result = "";
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result = result.substr(0, result.size() - 1); // Remove the last space
    
    cout << result << endl;
    
    return 0;
}