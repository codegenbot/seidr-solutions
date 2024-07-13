#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += sentence[i];
        }
    }

    result += word;

    for (int i = 0; i < result.length(); i++) {
        if ((result[i] >= 'a' && result[i] <= 'z') || (result[i] >= 'A' && result[i] <= 'Z')) {
            int j = i;
            while (j < result.length() && (result[j] >= 'a' && result[j] <= 'z' || result[j] >= 'A' && result[j] <= 'Z')) {
                j++;
            }
            if (j - i >= 5) {
                std::string temp = result.substr(i, j - i);
                std::reverse(temp.begin(), temp.end());
                result.replace(i, j - i, temp);
                i += j - i;
            }
        }
    }

    return result;
}

int main() {
    // test cases
    cout << spinWords("a") << endl;  // output: a
    cout << spinWords("this is a test") << endl;  // output: this is a test
    cout << spinWords("this is another test") << endl;  // output: this is rehtona test
    cout << spinWords("hi") << endl;  // output: hi

    return 0;
}