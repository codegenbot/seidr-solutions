int main() {
    int hours;
    float snowfall, rate, melt, total_snow;
    
    cin >> hours >> total_snow >> snowfall >> melt;

    for (int i = 0; i < hours; ++i) {
        total_snow += snowfall;
        total_snow *= (1 - melt);
    }

    cout << total_snow << endl;

    return 0;
}