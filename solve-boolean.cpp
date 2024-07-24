string solveBoolean(string booleanExp) {
    if (booleanExp == "T" || booleanExp == "t")
        return "True";
    else if (booleanExp == "F" || booleanExp == "f")
        return "False";
    else if (booleanExp.length() > 1 && booleanExp[0] == 'f' && booleanExp[1] == '&') {
        for (int i = 2; i < booleanExp.length(); i++) {
            if (booleanExp[i] == 't' || booleanExp[i] == 'T')
                return "False";
        }
        return "True";
    } else if (booleanExp.length() > 1 && booleanExp[0] == 'f' && booleanExp[1] == '|') {
        for (int i = 2; i < booleanExp.length(); i++) {
            if (booleanExp[i] == 't' || booleanExp[i] == 'T')
                return "True";
        }
        return "True";
    } else if (booleanExp.length() > 1 && booleanExp[0] == 't' && booleanExp[1] == '&') {
        for (int i = 2; i < booleanExp.length(); i++) {
            if (booleanExp[i] == 'f' || booleanExp[i] == 'F')
                return "False";
        }
        return "True";
    } else if (booleanExp.length() > 1 && booleanExp[0] == 't' && booleanExp[1] == '|') {
        for (int i = 2; i < booleanExp.length(); i++) {
            if (booleanExp[i] == 'f' || booleanExp[i] == 'F')
                return "True";
        }
        return "True";
    } else
        return "Invalid expression";
}