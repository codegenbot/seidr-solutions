int main() {
    std::string res = "";
    for (char c : inputString) { 
        int num = c - '0';
        res += to_string(num * num);
    }
    cout << res << endl; // print the result
    return 0;
}