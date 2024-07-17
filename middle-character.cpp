Here is the solution:

string middleCharacter(string str) {
    int n = str.length();
    if (n % 2 != 0) return string(1, str[n/2]);
    else return string(1, str[(n-1)/2]) + string(1, str[(n+1)/2]);
}