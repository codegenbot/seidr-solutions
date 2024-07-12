int main() {
    string input, word;
    getline(cin, input);
    istringstream iss(input);
    string result = "";
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