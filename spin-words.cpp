#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int count = 0;
    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] == ' ') {
            result += " ";
            count = 0;
        } else {
            count++;
            if(count >= 5) {
                for(int j = i; j >= i-count+1 && j >= 0; j--) {
                    result += sentence[j];
                }
            } else {
                result += sentence[i];
            }
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}