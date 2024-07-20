Here's the solution:

string spinWords(string str) {
    string result = "";
    int spaceCount = 0;
    
    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            spaceCount++;
            continue;
        }
        
        if (spaceCount > 0) {
            string temp = str.substr(i, str.find(' ', i) - i);
            for (int j = temp.length() - 1; j >= 0; j--) {
                result += temp[j];
            }
            spaceCount--;
        } else {
            if (temp.size() >= 5)
                for (int j = temp.length() - 1; j >= 0; j--)
                    result += temp[j];
            else
                result += temp;
        }
    }
    return result;
}