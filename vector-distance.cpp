#include <cmath>

double sum = 0.0;
for (int i = 0; i < n; ++i) {
    sum += (v1[i] - v2[i]) * (v1[i] - v2[i]);
}

double distance = std::sqrt(sum);