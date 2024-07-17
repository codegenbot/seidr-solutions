Here is the solution:

string middleCharacter(string str) {
    int n = str.length();
    if (n % 2 == 0)
        return str.substr(n / 2 - 1, 2);
    else
        return str.substr(n / 2, 1);
}