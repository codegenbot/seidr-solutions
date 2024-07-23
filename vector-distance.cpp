float distance = 0.0; // initialize distance to 0.0
for (int i = 0; i < n; ++i) {
    distance += pow(vec1[i] - vec2[i], 2);
}
distance = sqrt(distance); // calculate square root of the sum
cout << distance << endl;