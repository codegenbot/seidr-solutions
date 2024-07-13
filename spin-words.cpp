```cpp
string spinWords(string str) {
    vector<string> words;
    
    string word = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += str[i];
        }
    }
    
    words.push_back(word);
    
    string result = "";
    
    for(auto w : words) {
        if(w.length() >= 5) {
            reverse(w.begin(), w.end());
        }
        
        result += w + " ";
    }
    
    result.pop_back(); // remove trailing space
    return result;
}

int main() {
    string str;
    cout << "Enter a string of one or more words (separated by spaces): ";
    getline(cin, str);

    string output = spinWords(str);
    
    cout << "Output: " << output << endl;

    return 0;
}