#include <iostream>
#include <string>

std::string spinWords(const std::string& str) {
    std::string result = "";
    for (const auto& word : str.split(" ")) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        cout << spinWords(s) << endl;
    }
    return 0;
}