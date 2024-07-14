```cpp
double vectorDistance(int n) {
    double sum = 0;
    double x1[n], x2[n]; // Declare arrays of size 'n'
    for (int i = 0; i < n; i++) { 
        cin >> x1[i] >> x2[i];
        sum += pow(x2[i] - x1[i], 2);
    }
    return sqrt(sum); 
}