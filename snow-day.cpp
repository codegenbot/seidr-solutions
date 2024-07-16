```c++
float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    float newTotalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        newTotalSnow += rateOfSnowfall - proportionOfMeltingPerHour * newTotalSnow;
    }
    return newTotalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionOfMeltingPerHour;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the initial snow amount (in inches): ";
    cin >> initialSnow;
    cout << "Enter the rate of snow fall per hour (in inches): ";
    cin >> rateOfSnowfall;
    cout << "Enter the proportion of snow melting per hour (as a decimal value, e.g., 0.5 for half an inch): ";
    cin >> proportionOfMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMeltingPerHour);
    cout << "The amount of snow on the ground after " << hours << " hours is: " << result;
    return 0;
}