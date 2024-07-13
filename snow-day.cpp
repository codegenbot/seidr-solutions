int main() {
    int hours;
    float snowAmount, snowFallRate, meltRate;
    cin >> hours >> snowAmount >> snowFallRate >> meltRate;
    
    for (int i = 0; i < hours; ++i) {
        snowAmount += snowFallRate;
        snowAmount -= snowAmount * meltRate;
    }
    
    cout << snowAmount << endl;
    
    return 0;
}