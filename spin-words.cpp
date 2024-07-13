int main() {
    string input;
    getline(cin, input);
    string result = "";
    istringstream iss(input);
    string word;
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    result.pop_back(); // Remove extra space at the end
    cout << result << endl;
    return 0;
}