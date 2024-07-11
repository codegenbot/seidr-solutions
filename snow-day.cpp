#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow_on_ground, rate_of_snow_fall, proportion_of_snow_melting;
    cin >> hours >> snow_on_ground >> rate_of_snow_fall >> proportion_of_snow_melting;

    float remaining_snow = snow_on_ground + (rate_of_snow_fall - rate_of_snow_fall * proportion_of_snow_melting) * hours;

    cout << remaining_snow << endl;

    return 0;
}