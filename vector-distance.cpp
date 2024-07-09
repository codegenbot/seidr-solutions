double distance = 0.0;
for (int i = 0; i < n; i++) {
    distance += pow(v2[i] - v1[i], 2);
}
distance = sqrt(distance);
return distance;