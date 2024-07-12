int main() {
    int hours;
    float ground_snow, snow_fall, snow_melt;
    cin >> hours >> ground_snow >> snow_fall >> snow_melt;

    for(int i = 0; i < hours; i++) {
        ground_snow += snow_fall;
        ground_snow -= ground_snow * snow_melt;
    }

    cout << ground_snow;

    return 0;
}