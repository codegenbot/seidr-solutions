int main() {
    string line;
    getline(cin, line);
    
    string word, result;
    istringstream iss(line);
    
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove the extra space at the end
    cout << result << endl;

    return 0;
}