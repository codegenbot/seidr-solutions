#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    float vec1[n];
    float vec2[n];

    // Read input for first vector
    cout << "Enter " << n << " values for the first vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    // Read input for second vector
    cout << "\nEnter " << n << " values for the second vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    return sqrt(sum);
}

int main() {
    int n;
    cout << "Enter the number of dimensions: ";
    cin >> n;

    double result = vectorDistance(n);

    cout << "\nThe Euclidean distance between the two vectors is: " << result << endl;

    return 0;
}