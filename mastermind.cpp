#include <vector>
using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for(int i = 0; i<4; ++i){
        if(code[i] == guess[i]){
            // Correct place and color. Count as black peg.
            return -1;
        }
        else{
            // Check the remaining 3 characters of code at correct position in guess
            int j=0;
            while(j<3 && guess[j+i+1]!=code[i])
                j++;
            if(j<3)
                count++; 
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for(int i = 0; i<4; ++i){
        if(code[i] == guess[i]){
            // Correct place and color. Count as black peg.
            count++;
        }
    }
    return count;
}

int main() {
    // Test cases
    string code1 = "RRRR";
    string guess1 = "RRRR";
    int result1[] = {0, 4};
    if ((whitePegs(code1, guess1) != result1[0]) || (blackPegs(code1, guess1) != result1[1])) {
        cout << "Test case failed!" << endl;
    }

    string code2 = "BOYG";
    string guess2 = "GYOB";
    int result2[] = {4, 0};
    if ((whitePegs(code2, guess2) != result2[0]) || (blackPegs(code2, guess2) != result2[1])) {
        cout << "Test case failed!" << endl;
    }

    string code3 = "WYYW";
    string guess3 = "BBOG";
    int result3[] = {0, 0};
    if ((whitePegs(code3, guess3) != result3[0]) || (blackPegs(code3, guess3) != result3[1])) {
        cout << "Test case failed!" << endl;
    }

    string code4 = "GGGB";
    string guess4 = "BGGG";
    int result4[] = {2, 2};
    if ((whitePegs(code4, guess4) != result4[0]) || (blackPegs(code4, guess4) != result4[1])) {
        cout << "Test case failed!" << endl;
    }

    string code5 = "BBBB";
    string guess5 = "OOOO";
    int result5[] = {0, 0};
    if ((whitePegs(code5, guess5) != result5[0]) || (blackPegs(code5, guess5) != result5[1])) {
        cout << "Test case failed!" << endl;
    }

    return 0;
}