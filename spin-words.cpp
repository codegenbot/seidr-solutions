#include <string>
using namespace std;

int main() {
    string spinWords(string str) {
        string result = "";
        int i = 0;
        while (i < str.length()) {
            if (str.find(" ", i) == -1 || i + 1 >= str.length()) {
                if (str.substr(i).length() >= 5)
                    for (int j = str.substr(i).length() - 1; j >= 0; --j)
                        result += str.substr(i)[j];
                else
                    result += str.substr(i);
                break;
            }
            int j = str.find(" ", i);
            string word = str.substr(i, j - i);
            if (word.length() >= 5) {
                for (int k = word.length() - 1; k >= 0; --k)
                    result += word[k];
            } else
                result += word;
            i = j + 1;
        }
        return result;
    }
    string userInput;
    cout << "Enter a sentence: ";
    getline(cin, userInput);
    string output = spinWords(userInput);
    cout << "Spin Words Result: " << output << endl;
    return 0;
}