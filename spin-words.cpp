int main() {
    string input;
    getline(cin, input);

    string word, result;
    istringstream iss(input);
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    if (!result.empty()) {
        result.pop_back();
    }

    cout << result;

    return 0;
}