double sum = 0.0;
for (int i = 0; i < n; ++i) {
    sum += pow(vec1[i] - vec2[i], 2);
}

double distance = sqrt(sum);