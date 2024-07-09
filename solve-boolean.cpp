case '|': {
    while (i < s.size()) {
        switch (s[i]) {
            case 'T':
                return true;
            case 'F':
                i++;  
                result = false;
                break;
        }
        i++;
    }
    return result;
}