```cpp
double vectorDistance(int n) {
    Vector v1, v2;
    
    for (int i = 0; i < n; i++) {
        cin >> v1.elements[i] >> v2.elements[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(abs(v2.elements[i] - v1.elements[i]), 2);
    }
    
    return sqrt(sum);
}