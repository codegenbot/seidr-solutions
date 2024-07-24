string spinWords(string str) {
    string result = "";
    size_t start = 0;
    
    while (start < str.length()) {
        size_t end = str.find(' ', start);
        
        if (end == string::npos)
            end = str.length();
        
        string word = str.substr(start, end - start);
        
        if (word.length() >= 5)
            reverse(word.begin(), word.end());
        else
            result += word + " "; // keep the space if word length is less than 5

        result += word + " ";
        start = end + 1;
    }
    
    return result.substr(0, result.length() - 1); // remove trailing space
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string: ";
        getline(cin, str);
        if(str == "quit" || str == "exit") break; 
        cout << spinWords(str);
    }
}