Here is the solution:

string spinWords(string str) {
    string result = "";
    int wordLen;
    char* token;

    for(token = strtok((char*)str.c_str(), " "); token != NULL; token = strtok(NULL, " ")) {
        wordLen = strlen(token);

        if(wordLen >= 5)
            strcat(result, (string(token) + " "));
        else
            strcat(result, token);
    }

    return result.substr(0, result.length() - 1);
}