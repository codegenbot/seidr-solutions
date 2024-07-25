int main() {
    string input;
    getline(cin, input);
    
    istringstream iss(input);
    string word;
    string result = "";
    
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove extra space at the end
    cout << result << endl;
    
    return 0;
}