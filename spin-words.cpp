string spinWords(string str) {
    string result = "";
    size_t start = 0;
    
    while (start < str.length()) {
        size_t end = str.find(' ', start);
        
        if (end == string::npos)
            end = str.length();
        
        string word = str.substr(start, end - start);
        
        if(word.length() >=5) 
            for(long long i = 0; i < word.length() / 2; ++i) {
                swap(word[i],word[word.length()-1-i]);
            }
        
        result += word + " ";
        
        start = end + 1;
    }
    
    return result.substr(0, result.length() - 1);
}