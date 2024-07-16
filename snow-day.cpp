int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melting_proportion;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melting_proportion;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground *= (1.0 - snow_melting_proportion);
    }

    cout << snow_on_ground << endl;

    return 0;
}