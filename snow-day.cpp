int main() {
    int hours;
    double snow, rate, melt;
    cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        snow += rate;
        snow = snow - (melt * snow);
    }

    cout << snow;
    
    return 0;
}