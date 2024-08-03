Here is the solution:

string middleCharacter(string s) {
    int n = s.length();
    if (n % 2 == 1)
        return s.substr(n / 2, 1);
    else
        return s.substr((n - 1) / 2, 2);
}