#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    string res = "";
    for (char c : n) {
        int num = c - '0';
        res += to_string(num * num);
    }
    cout << res << endl;
    return 0;
}