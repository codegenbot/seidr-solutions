int main() {
    int hours;
    double snow, rate, melt;

    cin >> hours >> snow >> rate >> melt;

    double remaining_snow = snow;
    for(int i = 0; i < hours; i++) {
        remaining_snow += rate;
        remaining_snow -= melt * remaining_snow;
    }

    cout << remaining_snow;

    return 0;
}