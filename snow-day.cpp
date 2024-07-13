int main() {
    int hours;
    float snow_on_ground, rate_of_snow_fall, proportion_of_melting;
    cin >> hours >> snow_on_ground >> rate_of_snow_fall >> proportion_of_melting;

    float snow = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        snow += rate_of_snow_fall;
        snow -= snow * proportion_of_melting;
    }

    cout << snow << endl;

    return 0;
}