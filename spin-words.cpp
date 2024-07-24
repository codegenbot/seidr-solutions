int main() {
    string input;
    getline(cin, input);

    string word, output;
    istringstream iss(input);

    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        output += word + " ";
    }

    output.pop_back(); // Remove extra space at the end
    cout << output << endl;

    return 0;
}