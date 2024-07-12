int main() {
    int hours;
    float snow, rate, meltRate;
    cin >> hours >> snow >> rate >> meltRate;

    for (int i = 0; i < hours; ++i) {
        snow += rate;
        snow *= (1.0 - meltRate);
    }

    cout << snow << endl;

    return 0;
}