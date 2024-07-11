int main() {
    int hours;
    float snow_on_ground, rate_of_snow_fall, proportion_of_melting;
    cin >> hours >> snow_on_ground >> rate_of_snow_fall >> proportion_of_melting;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground = (snow_on_ground + rate_of_snow_fall) * (1 - proportion_of_melting);
    }

    cout << fixed << snow_on_ground << endl;

    return 0;
}