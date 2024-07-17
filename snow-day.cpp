#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rateFall, float meltRate) {
    double totalSnow = 0;
    
    // calculate the total amount of snow after each hour
    for (int i = 0; i < hours; ++i) {
        totalSnow += rateFall - meltRate;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float groundSnow, rateFall, meltRate;

    cin >> hours >> groundSnow >> rateFall >> meltRate;

    cout << fixed << setprecision(10);
    cout << snowDay(hours, groundSnow, rateFall, meltRate) << endl;

    return 0;
}