int main() {
    string from, to, message;
    cin >> from >> to >> message;

    for (char &c : message) {
        for (int i = 0; i < from.size(); ++i) {
            if (c == from[i]) {
                c = to[i];
                break;
            }
        }
    }

    cout << message << endl;

    return 0;
}