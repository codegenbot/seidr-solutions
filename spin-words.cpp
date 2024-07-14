```cpp
string spinWords(string str) {
    string result = "";
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            length = 0;
            result += " ";
        } else {
            length++;
            if (length >= 5) {
                for (int j = 0; j < length; j++) {
                    result += str[i + j];
                }
            } else {
                result += str[i];
            }
        }
    }
    return result;
}