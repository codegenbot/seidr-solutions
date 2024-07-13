int main() {
    string input;
    getline(cin, input);
    
    string word;
    string result;
    istringstream iss(input);
    
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove the trailing space
    
    cout << result << endl;
    
    return 0;
}