int main() {
    string input;
    getline(cin, input);

    string word, output;
    stringstream ss(input);

    while (ss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        output += word + " ";
    }

    output.pop_back(); // remove extra space at the end

    cout << output << endl;

    return 0;
}