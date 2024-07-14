Here is the solution:

string spinWords(string str) {
    string result = "";
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += " ";
            count = 0;
        } else {
            count++;
            if (count > 4) {
                string temp = "";
                while (i >= 0 && str[i] != ' ') {
                    temp = str[i] + temp;
                    i--;
                }
                for (int j = temp.length() - 1; j >= 0; j--) {
                    result += temp[j];
                }
            } else {
                result += str[i];
            }
        }
    }
    return result;
}