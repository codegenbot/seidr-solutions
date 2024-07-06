```cpp
#include <iostream>
using namespace std;

int main() {
    int hours;
    string hoursString;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    // Read input from user
    cout << "Enter number of hours: ";
    cin >> hoursString;
    initialSnow = stof(hoursString);
    cout << "Enter initial snow: ";
    cin >> hoursString;
    rateOfSnowfall = stof(hoursString);
    cout << "Enter rate of snow fall: ";
    cin >> hoursString;
    proportionMeltingPerHour = stof(hoursString);

    cout << "Enter number of hours: ";
    cin >> hoursString;
    float result = snowDay(stoi(hoursString), initialSnow, rateOfSnowfall, proportionMeltingPerHour);
    
    // Print output
    cout << "Amount of snow on the ground after " << hoursString << " hours is: " << to_string(result) << endl;

    return 0;
}

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow -= totalSnow * proportionMeltingPerHour; 
        totalSnow += rateOfSnowfall; 
    }
    
    return totalSnow;
}