int main() {
    int hours;
    float snow, fall_rate, melt_rate;
    cin >> hours >> snow >> fall_rate >> melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow += fall_rate;
        snow -= snow * melt_rate;
    }

    cout << snow << endl;

    return 0;
}