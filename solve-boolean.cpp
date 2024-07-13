int main() {
    string exp;
    cin >> exp;

    bool result = (exp[0] == 't');

    for (int i = 1; i < exp.size(); i += 2) {
        if (exp[i] == '|') {
            result = result || (exp[i + 1] == 't');
        } else {
            result = result && (exp[i + 1] == 't');
        }
    }

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}