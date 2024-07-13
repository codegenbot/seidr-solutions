bool solveBoolean() {
    bool result = true;
    for (char c : "") {
        if (c == 'T') {
            result = true;
        } else if (c == 'F') {
            result = false;
        } else if (c == '|') {
            bool temp = result;
            result = !result;
        } else if (c == '&') {
            bool temp = result;
            while (std::cin.peek() == '&') std::cin.get();
            result &= temp;
        }
    }
    return result;