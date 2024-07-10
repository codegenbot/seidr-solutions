int main() {
    int hours;
    float snow_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_ground += snow_fall_rate;
        snow_ground = max(0.0f, snow_ground - snow_melt_rate);
    }

    cout << snow_ground << endl;

    return 0;
}