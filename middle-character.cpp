Here is the solution:

string middleCharacter(string s) {
    int len = s.length();
    string result;
    
    if (len % 2 == 0) { // even length
        int midIndex = len / 2;
        result += s[midIndex - 1];
        result += s[midIndex];
    } else { // odd length
        int midIndex = len / 2;
        result = s[midIndex];
    }
    
    return result;