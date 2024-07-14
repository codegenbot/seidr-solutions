#include <vector>
using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return 4 - count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    vector<char> codeArr(code.begin(), code.end());
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            codeArr.erase(unique(codeArr.begin(), codeArr.end()), codeArr.end());
            count++;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}