int main() {
    int hours;
    float snow_amount, snow_fall_rate, melting_proportion;
    cin >> hours >> snow_amount >> snow_fall_rate >> melting_proportion;
    
    for (int i = 0; i < hours; ++i) {
        snow_amount += snow_fall_rate;
        snow_amount -= melting_proportion * snow_amount;
    }
    
    cout << snow_amount << endl;
    
    return 0;
}