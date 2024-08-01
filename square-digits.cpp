Here is the solution:

int findDigitSquare(int num) {
    string strNum = to_string(num);
    string result = "";
    for (char c : strNum) {
        int digit = c - '0';
        int square = digit * digit;
        char sq_str[3];
        sprintf(sq_str, "%d", square);
        result += sq_str;
    }
    returnstoi(result);
}