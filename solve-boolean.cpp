int main() {
    string input;
    cin >> input;
    
    if (input == "t") {
        cout << "True";
    } else if (input == "f") {
        cout << "False";
    } else if (input == "f&f" || input == "f&t" || input == "t&f") {
        cout << "False";
    } else {
        cout << "True";
    }
    
    return 0;
}