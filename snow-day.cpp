int main() {
    int hours;
    float snow, rate, melt;
    cin >> hours >> snow >> rate >> melt;

    float total_snow = snow;
    for (int i = 0; i < hours; ++i) {
        total_snow += rate;
        total_snow -= total_snow * melt;
    }

    cout << total_snow << endl;
    
    return 0;
}