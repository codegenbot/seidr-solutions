string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ') {
            result += str.substr(wordLength, i - wordLength);
            wordLength = i + 1;
        }
    }
    result += str.substr(wordLength);

    string temp = "";
    for (int j = 0; j < result.length(); j++) {
        if (result[j] == ' ') {
            temp += " ";
            int len = temp.length();
            if(len >=5) {
                for(int k=len-1; k>=len-5; k--)
                    temp+=temp[k];
            }
            else
                temp += result[j];
        } 
        else { 
            temp += result[j];
        } 
    }

    return temp;
}