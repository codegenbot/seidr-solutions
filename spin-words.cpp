int main() {
    string input, word, result;
    getline(cin, input);
    istringstream iss(input);
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    result.pop_back(); // remove last space
    cout << result << endl;
    return 0;
}