Here is the solution:

string middleCharacter(string s) {
    int len = s.length();
    string result;
    
    if(len % 2 == 0) {
        int midIndex1 = len / 2 - 1;
        int midIndex2 = len / 2;
        result += s[midIndex1];
        result += s[midIndex2];
    } else {
        int midIndex = len / 2;
        result = s[midIndex];
    }
    
    return result;
}