int main() {
    int hours;
    float snow_ground, snow_fall, melt_rate;
    cin >> hours >> snow_ground >> snow_fall >> melt_rate;

    for (int i = 0; i < hours; i++) {
        snow_ground += snow_fall;
        snow_ground *= (1.0 - melt_rate);
    }

    cout << snow_ground << endl;

    return 0;
}