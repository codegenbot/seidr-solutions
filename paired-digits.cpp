#include <string>
using namespace std;

int main() {
    int sum = 0;
    string s; 
    cin >> s;
    
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += (s[i] - '0') * 2;
        }
    }
    
    cout << "Sum of paired digits: " << sum << endl;
    
    return 0;
}