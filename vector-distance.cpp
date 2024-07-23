```c++
double vectorDistance(int n) {
    double sum = 0;
    double vec1[n], vec2[n];
    for (int i = 0; i < n; i++) {
        std::cin >> vec1[i] >> vec2[i];
    }
    for (int i = 0; i < n; i++) {
        sum += pow((vec2[i] - vec1[i]), 2);
    }
    return sqrt(sum);
}