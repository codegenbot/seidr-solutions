string spinWords(const string &sentence) {
    string result = "";
    istringstream iss(sentence);
    string word;
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    result.pop_back(); // Remove extra space at the end
    return result;
}
int main() {
    string input;
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}