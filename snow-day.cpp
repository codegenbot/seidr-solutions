}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfSnowMeltingPerHour) << endl;
    return 0;