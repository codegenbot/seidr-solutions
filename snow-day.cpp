int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float snow_on_ground_final = snow_on_ground;
    for (int i = 0; i < hours; i++) {
        snow_on_ground_final += snow_fall_rate;
        snow_on_ground_final -= snow_on_ground_final * snow_melt_rate;
    }

    cout << snow_on_ground_final << endl;

    return 0;
}