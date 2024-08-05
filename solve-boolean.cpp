bool solveBoolean(std::string expression) {
    bool result = true;
    for (char c : expression) {
        if (c == '&') {
            result &= false;
        } else if (c == '|') {
            result |= true;
        } else if (c != 'T' && c != 'F') {
            if (c == '&')
                result &= false;
            else
                result |= true;
        }
    }
    return result;
}