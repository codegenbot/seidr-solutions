int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground = snow_on_ground + snow_fall_rate - melt_rate * snow_on_ground;
    }

    cout << snow_on_ground;

    return 0;
}