int main() {
    string word, result;
    while (cin >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    result.pop_back();
    cout << result << endl;
    return 0;
}