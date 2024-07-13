int main() {
    string s;
    cin >> s;
    
    if (s == "t")
        cout << "True";
    else if (s == "f")
        cout << "False";
    else if (s == "f&f" || s == "f&t" || s == "t&f")
        cout << "False";
    else
        cout << "True";
    
    return 0;
}