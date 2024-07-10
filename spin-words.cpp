#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string result;
    istringstream iss(input);

    transform(istream_iterator<string>(iss), istream_iterator<string>(), 
              back_inserter(result), [](const string& word){
        if (word.length() >= 5) {
            return string(word.rbegin(), word.rend());
        }
        return word;
    });

    cout << result << endl;
    
    return 0;
}