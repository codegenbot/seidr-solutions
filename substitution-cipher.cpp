```cpp
string decipher(const string& cipher1, const string& cipher2, const string& message) {
    string result = "";
    for (char c : message) {
        int idx = cipher1.find(c);
        if (idx != string::npos) {
            result += cipher2[idx];
        } else {
            result += c; // keep non-mapped characters as is
        }
    }
    return result;
}