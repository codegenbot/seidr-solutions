Here is the solution:

string solveBoolean(string b) {
    bool result = true;
    for (int i = 0; i < b.length(); ++i) {
        if (b[i] == 'F') result = false;
        else if (b[i] == '&') {
            while (i + 1 < b.length() && b[i + 1] != '|') i++;
            i++; // Skip '&' character
        }
    }
    return result ? "True" : "False";
}