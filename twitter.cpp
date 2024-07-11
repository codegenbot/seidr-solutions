int main() {
    string input;
    while (true) {
        cout << "input: ";
        getline(cin, input);
        cout << validateTweet(input) << endl;
    }
    return 0;
}