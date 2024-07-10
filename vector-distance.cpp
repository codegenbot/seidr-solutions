```cpp
double total = 0;
for (int i = 0; i < vector1.size(); ++i) {
    float diff = vector1[i] - vector2[i];
    total += diff * diff;
}
return std::sqrt(total);