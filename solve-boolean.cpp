int main() {
    string input;
    cin >> input;
    
    if (input == "t") {
        cout << "True" << endl;
    } else if (input == "f") {
        cout << "False" << endl;
    } else {
        char left = input[0];
        char op = input[1];
        char right = input[2];
        
        if ((left == 't' && right == 't' && op == '&') || (left == 'f' && right == 'f' && op == '|')) {
            cout << "False" << endl;
        } else {
            cout << "True" << endl;
        }
    }
    
    return 0;
}