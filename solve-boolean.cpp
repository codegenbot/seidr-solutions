int main() {
    string input;
    cin >> input;
    
    if(input == "t") {
        cout << "True";
    } else if(input == "f") {
        cout << "False";
    } else {
        bool val1 = input[0] == 't' ? true : false;
        bool val2 = input[2] == 't' ? true : false;
        
        if(input[1] == '&') {
            cout << (val1 && val2 ? "True" : "False");
        } else if(input[1] == '|') {
            cout << (val1 || val2 ? "True" : "False");
        }
    }
    
    return 0;
}