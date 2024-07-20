```cpp
#include <iostream>
using namespace std;

double vectorDistance(int n, float v1[], float v2[]) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow((v2[i] - v1[i]), 2);
    }
    
    return sqrt(sum); 
}

int main() {
    int n = 3; // number of dimensions
    float v1[3] = {0, 0, 0}; // first vector
    float v2[3] = {1, 1, 1}; // second vector
    
    double result = vectorDistance(n, v1, v2);
    
    cout << "The Euclidean distance is: " << result << endl;
    
    return 0;
}