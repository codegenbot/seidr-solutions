int main() {
    string input;
    cin >> input;
    
    if (input == "t") {
        cout << "True" << endl;
    } else if (input == "f") {
        cout << "False" << endl;
    } else if (input == "f&f" || input == "f&t" || input == "t&f") {
        cout << "False" << endl;
    } else {
        cout << "True" << endl;
    }
    
    return 0;
}