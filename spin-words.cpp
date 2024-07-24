Here is the solution:

string spinWords(string str) {
    string result = "";
    string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }
    
    result += word;
    
    int j = 0;
    while (j < result.length()) {
        if (result[j] == ' ' || j == result.length() - 1) {
            string temp = result.substr(j);
            if (temp.length() >= 5) {
                for (int k = temp.length() - 1; k >= 0; k--) {
                    cout << temp[k];
                }
            } else {
                cout << temp;
            }
            j += temp.length();
        } else {
            cout << result[j];
            j++;
        }
    }
    
    return "";
}