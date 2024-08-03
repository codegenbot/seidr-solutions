bool solveBoolean(string input) {
    bool result = false;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'T') {
            result = true;
        } else if (input[i] == 'F') {
            return false;
        } else if (input[i] == '|') {
            bool temp1 = result;
            for (int j = i + 1; j < input.length(); j++) {
                if (input[j] == '&') {
                    i = j;
                    break;
                }
                if (input[j] == 'T') {
                    result = true;
                } else if (input[j] == 'F') {
                    return false;
                }
            }
            result = temp1 | result;
        } else if (input[i] == '&') {
            bool temp1 = result;
            for (int j = i + 1; j < input.length(); j++) {
                if (input[j] == '|') {
                    i = j;
                    break;
                }
                if (input[j] == 'T') {
                    result &= true;
                } else if (input[j] == 'F') {
                    return false;
                }
            }
            result = temp1 & result;
        }
    }
    return result;
}