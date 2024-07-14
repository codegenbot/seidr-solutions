#include <string>
#include <sstream>

std::string spinWords(std::string sentence) {
    std::stringstream ss(sentence);
    std::string word;
    
    std::string result;
    
    while (ss >> word) {
        if(word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }
    
    return result.substr(0, result.size()-1);
}

int main(){
    // test cases
    cout << spinWords("a") << endl; // should print a
    cout << spinWords("this is a test") << endl; // should print this is a test
    cout << spinWords("this is another test") << endl; // should print this is rehtona test
    cout << spinWords("hi") << endl; // should print hi

    return 0;
}