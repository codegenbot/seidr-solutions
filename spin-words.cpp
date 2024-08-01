Here's the solution:

string spinWords(string str) {
    string result = "";
    int wordCount = 0;
    
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            wordCount++;
            result += " ";
        }
        else if(wordCount > 0) {
            if(i < str.length() - 1 && isalpha(str[i+1])) {
                for(int j = i; str[j].isalpha(); j++) {
                    i = j;
                }
                string temp = str.substr(i, str.length() - i);
                if(temp.length() >= 5) {
                    reverse(temp.begin(), temp.end());
                }
                result += temp + " ";
            } else {
                result += str.substr(wordCount == 0 ? 0 : i - wordCount, (i > 0 && !str[i-1].isalpha()) || i == str.length() - 1 ? i - wordCount + 1 : i) + " ";
                wordCount++;
            }
        } else {
            if(i < str.length() - 1 && isalpha(str[i+1])) {
                for(int j = i; str[j].isalpha(); j++) {
                    i = j;
                }
                result += str.substr(0, i) + " ";
                wordCount++;
            } else {
                result += str.substr(0, (i > 0 && !str[i-1].isalpha()) || i == str.length() - 1 ? i : i - 1) + " ";
                wordCount = 1;
            }
        }
    }
    
    return result.substr(0, result.length() - 1);
}