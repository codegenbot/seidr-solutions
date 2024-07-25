string middleCharacter(string s) {
    int length = s.length();
    if(length % 2 == 0) {
        return s.substr(length/2-1, 2);
    } else {
        return s.substr(length/2, 1);
    }
}

int main() {
    string s;
    cin >> s;
    cout << middleCharacter(s) << endl;
    return 0;
}