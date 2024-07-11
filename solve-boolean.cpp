int main() {
    string input;
    cin >> input;
    
    if (input == "t") {
        cout << "True";
    } else if (input == "f") {
        cout << "False";
    } else {
        bool result = true;
        for (int i = 0; i < input.length(); i += 2) {
            if (input[i] == 'f' || input[i+2] == 'f') {
                result = false;
                break;
            }
        }
        if (result) {
            cout << "True";
        } else {
            cout << "False";
        }
    }
    
    return 0;
}