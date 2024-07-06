#include <iostream>
using namespace std;
float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_of_melting) {
    float current_snow = initial_snow;
    for (int i = 0; i < hours; i++) {
        current_snow += rate_of_snowfall;
        current_snow -= current_snow * proportion_of_melting;
    }
    return current_snow;
}

int main() {
    int hours = 10; // initialize the number of hours to 10
    float initial_snow = 5.0; // initialize the initial snow depth to 5.0 inches
    float rate_of_snowfall = 0.3; // initialize the rate of snow fall to 0.3 inches per hour
    float proportion_of_melting = 0.1; // initialize the proportion of melting to 0.1 (i.e., 10% of the total snow depth)
    
    float result = snow_day(hours, initial_snow, rate_of_snowfall, proportion_of_melting);
    cout << "The amount of snow on the ground after " << hours << " hours is: " << result << " inches." << endl;
    
    return 0;
}