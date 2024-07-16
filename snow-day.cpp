```cpp
int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionOfMeltingPerHour;

    cout << "Enter number of hours: ";
    cin >> hours;

    cout << "Enter the initial amount of snow: ";
    cin >> initialSnow;

    cout << "Enter the rate of snow fall per hour: ";
    cin >> rateOfSnowfall;

    cout << "Enter the proportion of melting snow per hour: ";
    cin >> proportionOfMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMeltingPerHour);

    cout << "After " << hours << " hours there will be " << result << " inches of snow." << endl;

    return 0;
}