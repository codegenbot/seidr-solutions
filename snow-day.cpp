int main() {
    int hours;
    cin >> hours;
    
    if (!(cin >> initialSnow) || !(cin >> rateOfSnowFall) || !(cin >> proportionOfSnowMeltingPerHour)) {
        cout << "Invalid input." << endl;
        return -1;
    }
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;