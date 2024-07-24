int main() {
    string input;
    cin >> input;
    
    if(input == "t") {
        cout << "True" << endl;
    } else if(input == "f") {
        cout << "False" << endl;
    } else {
        bool result;
        if(input.find('&') != string::npos) {
            result = (input[0] == 't' && input[2] == 't');
        } else if(input.find('|') != string::npos) {
            result = (input[0] == 't' || input[2] == 't');
        }
        cout << (result ? "True" : "False") << endl;
    }

    return 0;
}