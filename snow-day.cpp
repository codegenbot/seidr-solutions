int main() {
    int hours;
    while (!(cin >> hours)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    float initialSnow, snowFallRate, meltPerHour;
    while (!(cin >> initialSnow >> snowFallRate >> meltPerHour)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltPerHour) << endl;
    return 0;
}