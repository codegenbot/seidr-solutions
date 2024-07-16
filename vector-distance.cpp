double sum = 0.0;
for (int i = 0; i < vec1.size(); ++i) {
    sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
}
double distance = std::sqrt(sum);
return distance;