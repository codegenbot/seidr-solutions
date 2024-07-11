double sum = 0.0;
for (int i = 0; i < n; i++) {
    double diff = v2[i] - v1[i];
    sum += diff * diff;
}
return sqrt(sum);