int main() {
    int hours;
    double snow, rate, proportion;
    cin >> hours >> snow >> rate >> proportion;
    
    for (int i = 0; i < hours; ++i) {
        snow += rate;
        snow *= (1 - proportion);
    }
    
    cout << snow << endl;
    
    return 0;
}