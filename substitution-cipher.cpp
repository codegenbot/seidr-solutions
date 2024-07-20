```c++
#include <initializer_list>
#include <map>
#include <string>
#include <iostream>
#include <limits>

using namespace std;

map<char, char> mapping;
string decipher(string cipher_map1, string cipher_map2, string message) {
    for (int j = 0; j < min(cipher_map1.length(), cipher_map2.length()); j++) {
        mapping.insert(make_pair(tolower(cipher_map1[j]), tolower(cipher_map2[j])));
    }
    
    string result = "";
    for (char c : message) {
        if(mapping.find(tolower(c)) != mapping.end()) {
            char temp = mapping[tolower(c)];
            if(isalpha(temp))
                result += (isupper(c) ? toupper(temp) : tolower(temp));
            else
                result += temp; 
        } else {
            result += c; 
        }
    }
    return result;
}

int main() {
    char cipher_map1[256], cipher_map2[256], message[256];
    cout << "Enter the first string: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.getline(cipher_map1, 256);
    cout << "Enter the second string: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.getline(cipher_map2, 256);
    cout << "Enter the message to decipher: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.getline(message, 256);
    cout << decipher(string(cipher_map1), string(cipher_map2), string(message)) << endl;
    return 0;