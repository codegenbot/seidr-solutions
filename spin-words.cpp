string spinWords(string str) {
    string result = "";
    vector<int> spaceIndex;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            spaceIndex.push_back(i);
        } else {
            int wordEnd = i;
            
            while (i + 1 <= str.length() && str[i+1] != ' ') {
                i++;
            }
            
            string word = str.substr(spaceIndex[spaceIndex.size() - 1], wordEnd - spaceIndex[spaceIndex.size() - 1]);
            
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            i++;
        }
    }
    
    return result.substr(0, result.length()-1);
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}