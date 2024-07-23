int main() {
    string s; 
    cout << "Enter a string: ";
    cin >> s;
    string middleCharacter(string s) {
        int length = s.length();
        if (length % 2 == 0) {
            return s.substr(length / 2 - 1, 2);
        } else {
            return s.substr(length / 2, 1);
        }
    }
    cout << "Middle character(s): " << middleCharacter(s) << endl;
    return 0;
}