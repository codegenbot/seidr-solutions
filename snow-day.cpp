int main() {
    int hours;
    float snow, snow_fall, snow_melt;
    cin >> hours >> snow >> snow_fall >> snow_melt;

    for (int i = 0; i < hours; i++) {
        snow += snow_fall;
        snow -= snow * snow_melt;
    }

    cout << snow << endl;

    return 0;
}