int main() {
    int hours;
    float snow_ground, snow_fall, snow_melt;
    cin >> hours >> snow_ground >> snow_fall >> snow_melt;
    
    for (int i=0; i<hours; i++) {
        snow_ground += snow_fall;
        snow_ground -= snow_ground * snow_melt;
    }
    
    cout << snow_ground << endl;
    
    return 0;
}