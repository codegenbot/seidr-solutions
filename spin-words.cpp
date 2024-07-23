Here's the solution:

string spinWords(string s) {
    string result = "";
    std::istringstream iss(s);
    string word;

    while (iss >> word) {
        if(word.length() >= 5)
            result += std::to_string(word.rbegin()[0]) + word.substr(1,word.length()-1).rstr();
        else
            result += word + " ";
    }
    
    return result;
}