int main() {
    int hours;
    float snow, rate, melt;
    cin >> hours >> snow >> rate >> melt;
    
    for (int i = 0; i < hours; ++i) {
        snow = snow + rate - melt * snow;
    }
    
    cout << snow << endl;
    
    return 0;
}