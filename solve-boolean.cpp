```cpp
if (s.empty())
    return false;

int j = 0;
while (j < s.length() && (s[j] == '|' || s[j] == '&'))
    j++;

string opStr;
for (char c : s.substr(0, j)) {
    if(c == '|')
        opStr = "|";
    else
        opStr = "&";
}

bool result = false;
if (opStr[0] == '|') {
    for (int k = j; k < s.length(); k++) {
        if (s[k] == 'T')
            result = true;
        else if (s[k] == 'F') {
            result = false;
            return result;
        }
    }
} else {
    bool left = false, right = false;
    for (int i = 0; i < j; i++) {
        if (s[i] == 'T' && opStr[1] != '|')
            left = true;
        else if (s[i] == 'F' && opStr[1] != '&') {
            return false;
        }
    }
    for (int i = j; i < s.length(); i++) {
        if (s[i] == 'T' && opStr[0] == '|')
            right = true;
        else if (s[i] == 'F' && opStr[0] == '&') {
            right = false;
            return right;
        }
    }
    result = (opStr[0] == '|' ? left || right : left && right);
}

return result;