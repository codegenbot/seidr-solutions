Here is the C++ solution:

string middleCharacter(string s) {
    int n = s.length();
    string result;
    
    if (n % 2 == 0) {
        int midIndex1 = n / 2 - 1;
        int midIndex2 = n / 2;
        result = s.substr(midIndex1, 2);
    } else {
        int midIndex = n / 2;
        result = s.substr(midIndex, 1);
    }
    
    return result;