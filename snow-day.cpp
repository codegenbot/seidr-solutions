int main() {
    int hours;
    float initial_snow, snow_fall_rate, melting_rate;
    cin >> hours >> initial_snow >> snow_fall_rate >> melting_rate;

    float remaining_snow = initial_snow;
    for (int i = 0; i < hours; ++i) {
        remaining_snow += snow_fall_rate;
        remaining_snow -= melting_rate * remaining_snow;
        if (remaining_snow < 0.0001) {
            remaining_snow = 0.0;
        }
    }

    cout << remaining_snow << endl;

    return 0;
}