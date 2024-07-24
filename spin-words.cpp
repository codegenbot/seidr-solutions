Here is the solution:

string spinWords(string sentence) {
    string result = "";
    std::istringstream iss(sentence);
    std::string word;
    
    while (iss >> word) {
        if(word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        
        result += word + " ";
    }
    
    return result.substr(0, result.size()-1); // Remove the extra space at the end
}