int main() {
    int hours;
    float snow_ground, rate_snow_fall, proportion_melting;
    cin >> hours >> snow_ground >> rate_snow_fall >> proportion_melting;

    for (int i = 0; i < hours; i++) {
        snow_ground += rate_snow_fall;
        snow_ground -= proportion_melting * snow_ground;
    }

    cout << snow_ground << endl;

    return 0;
}