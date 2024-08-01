#include <cmath>

double sum_of_squares = 0.0; // Initialize sum_of_squares

// Compute the sum of squares of vector components
for (int i = 0; i < n; ++i) {
    sum_of_squares += (vector1[i] - vector2[i]) * (vector1[i] - vector2[i]);
}

// Calculate the Euclidean distance between two n-dimensional vectors
double distance = std::sqrt(sum_of_squares);