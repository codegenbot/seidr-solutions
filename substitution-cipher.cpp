int main() {
    string from, to, message;
    cin >> from >> to >> message;
    for (char &c : message) {
        int index = from.find(c);
        if (index != string::npos) {
            c = to[index];
        }
    }
    cout << message << endl;
    return 0;
}