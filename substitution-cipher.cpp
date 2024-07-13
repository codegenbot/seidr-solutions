#include <iostream>
#include <string>

int main() {
    string cipher1, cipher2, text;
    cin >> cipher1 >> cipher2 >> text;
    
    for (char &c : text) {
        for (int i = 0; i < cipher1.size(); ++i) {
            if (c == cipher1[i]) {
                c = cipher2[i];
                break;
            }
        }
    }
    
    cout << text << endl;
    
    return 0;
}