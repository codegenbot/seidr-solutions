bool solveBoolean(const string& s, size_t& i) {
    bool result = true;

    while (i < s.size()) {
        switch (s[i]) {
            case 'T':
                i++;  
                return true;
            case 'F':
                i++;  
                return false;
            case '&': {
                i++; // skip &
                if (!solveBoolean(s, i)) return false;  // short-circuit
                break;
            }
            case '|': {
                i++; // skip |
                result = result || solveBoolean(s, i);
                if (result) return true;  // short-circuit
                break;
            }
        }
        i++;
    }

    return result;
}