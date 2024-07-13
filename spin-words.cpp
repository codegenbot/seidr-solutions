int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);
    string word;
    string result;

    while (ss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    cout << result << endl;

    return 0;
}