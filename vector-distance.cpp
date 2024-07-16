double sum = 0.0; // Initialize sum
for (int i = 0; i < n; ++i) {
    sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]); // Update sum
}
double distance = sqrt(sum); // Calculate Euclidean distance