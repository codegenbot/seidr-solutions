```c
double vectorDistance() {
    int n;
    cin >> n;

    float* v1 = new float[n];
    float* v2 = new float[n];

    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        distance += pow((v2[i] - v1[i]), 2);
    }
    return sqrt(distance);
}