Here is the solution:

string spinWords(string input) {
    string output = "";
    std::istringstream iss(input);
    std::string word;
    
    while (iss >> word) {
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        output += word + " ";
    }
    
    return output.substr(0, output.size()-1);
}