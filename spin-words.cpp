```c++
string spinWords(string str) {
    string result = "";
    size_t pos = 0;
    while ((pos = str.find(" ")) != string::npos) {
        size_t wordLen = str.substr(0, pos).length();
        if (wordLen >= 5)
            for (int i = wordLen - 1; i >= 0; --i)
                result += str.substr(pos, pos + i + 1)[i];
        else
            result += str.substr(0, pos);
        str.erase(0, pos + 1);
    }
    result += str;
    return result;
}