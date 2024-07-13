int main() {
    int hours;
    double initial_snow, rate_of_snow_fall, proportion_of_melting;
    
    cin >> hours >> initial_snow >> rate_of_snow_fall >> proportion_of_melting;
    
    double snow_on_ground = initial_snow;
    
    for (int i = 0; i < hours; ++i) {
        snow_on_ground += rate_of_snow_fall;
        snow_on_ground -= snow_on_ground * proportion_of_melting;
    }
    
    cout << snow_on_ground;
    
    return 0;
}