int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melting_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melting_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground = snow_on_ground + snow_fall_rate - snow_on_ground * snow_melting_rate;
    }

    cout << snow_on_ground << endl;

    return 0;
}