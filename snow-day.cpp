#include <iostream>
using namespace std;

double snowDay(int hours, float groundSnow, float rate, float meltingRate) {
    double total = groundSnow;
    
    for(int i=0; i<hours; i++) {
        total += rate;
        if(total > 0)
            total -= total * meltingRate;
    }
    
    return total;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, meltingRate;
    cin >> groundSnow >> rate >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, meltingRate) << endl;
    
    return 0;
}