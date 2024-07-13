int main() {
    int hours = 0;
    float snow = 0, rate = 0, melt = 0;
    cin >> hours >> snow >> rate >> melt;
    for (int i = 0; i < hours; i++) {
        snow += rate;
        snow *= (1 - melt);
    }
    cout << snow;
    return 0;
}