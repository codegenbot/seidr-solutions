int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, melt_proportion;

    cin >> hours;
    cin >> snow_on_ground;
    cin >> snow_fall_rate;
    cin >> melt_proportion;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground -= melt_proportion * snow_on_ground;
    }

    cout << snow_on_ground << endl;

    return 0;
}