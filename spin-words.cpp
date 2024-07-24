Here's the solution:

string spinWords(string s) {
    string result = "";
    int wordLength;
    char* word = strtok(const_cast<char*>(s.c_str()), " ");
    while(word != NULL) {
        wordLength = strlen(word);
        if(wordLength >= 5) {
            for(int i = wordLength - 1; i >= 0; --i)
                result += word[i];
        } else
            result += word;
        result += " ";
        word = strtok(NULL, " ");
    }
    return result.substr(0, result.size() - 1);
}