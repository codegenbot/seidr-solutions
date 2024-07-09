#include <iostream>
#include <iomanip>
#include <numeric>

using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = static_cast<double>(initialSnow);
    auto accumulateRate = rateOfSnowFall - totalSnow * proportionOfSnowMeltingPerHour;
    totalSnow += std::accumulate(std::make_integer_sequence<int, 0ul, (hours-1)>{}, 0.0, accumulateRate);
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}