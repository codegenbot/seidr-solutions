```cpp
case '&': {
    bool subResult = true;
    int j = 0; 
    while (i < s.size() && s[i] == '&') {
        i++;
        j++;
    }
    for (; i < s.size(); i++) {
        if (s[i] != 'T' && s[i] != 'F')
            return false;
        if ((j % 2) != 0)
            subResult = false; 
        j++;
    }
    result = subResult;
    while(i < s.size() && (s[i] == 'T' || s[i] == 'F')) {
        i++; // process remaining operands
    }
    break; }