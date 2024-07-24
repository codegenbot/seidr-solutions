Here's the solution:

string spinWords(string sentence) {
    string result = "";
    string word = "";

    for(int i = 0; i < sentence.length(); i++) {
        char c = sentence[i];
        if(c == ' ') {
            if(word.length() >= 5) {
                for(int j = word.length()-1; j>=0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            word = "";
        } else {
            word += c;
        }
    }

    if(word.length() >= 5) {
        for(int i = word.length()-1; i>=0; i--) {
            result += word[i];
        }
    } else {
        result += word;
    }

    return result;
}