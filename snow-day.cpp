#include <iostream>
using namespace std;

int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;

    for (int i = 0; i < hours; ++i) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }

    cout << snowOnGround << "\n";
    
    return 0;
}