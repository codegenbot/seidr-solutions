Here is the solution:

string spinWords(string s) {
    string result = "";
    int i = 0;
    
    while(i < s.length()) {
        if(s[i] == ' ') {
            result += " ";
            i++;
        } else if(s.length() - i <= 5 || i >= s.length()) {
            result += s.substr(i, s.length() - i);
            break;
        } else {
            string word = "";
            while(i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            if(word.length() > 4) {
                for(int j = word.length() - 1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
        }
    }
    
    return result;
}