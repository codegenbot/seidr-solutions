float sum = 0.0;
for (size_t i = 0; i < std::max(n, m); ++i) {
    float diff = (i < n ? vec1[i] : 0) - (i < m ? vec2[i] : 0);
    sum += diff * diff;
}
float result = std::sqrt(sum);