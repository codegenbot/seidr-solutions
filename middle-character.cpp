string middleCharacter(string s) {
    int len = s.length();
    if (len % 2 == 1) {
        return string(1, s[len / 2]);
    } else {
        return s.substr(len / 2 - 1, 2);
    }
}

int main() {
    string input;
    cin >> input;
    
    string result = middleCharacter(input);
    cout << result << endl;
    
    return 0;
}