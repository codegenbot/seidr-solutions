int main() {
    int h;
    float snow, fall_rate, melt_rate;
    cin >> h >> snow >> fall_rate >> melt_rate;
    
    for (int i = 0; i < h; ++i) {
        snow += fall_rate;
        snow -= melt_rate * snow;
    }

    cout << snow << endl;
    
    return 0;
}