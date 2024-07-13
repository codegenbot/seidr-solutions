int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, melt_proportion;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> melt_proportion;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground -= melt_proportion * snow_on_ground;
        if (snow_on_ground < 0.0) {
            snow_on_ground = 0.0;
        }
    }

    cout << snow_on_ground << endl;

    return 0;
}