```cpp
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double calculateEuclideanDistance(const vector<float>& vector1, const vector<float>& vector2) {
    double sum = 0;
    if (vector1.size() != vector2.size()) {
        return -1; 
    }
    for (int i = 0; i < vector1.size(); ++i) {
        sum += pow(vector2[i] - vector1[i], 2); 
    }
    return sqrt(sum);
}

int main(){
    int n;
    cin >> n;
    vector<float> vec1(n), vec2(n);
    vec1.reserve(n);  
    vec2.reserve(n);  

    for(int i = 0; i < n; ++i){
        cin >> vec1[i];
    }

    for(int i = 0; i < n; ++i){
        cin >> vec2[i];
    }

    double distance = calculateEuclideanDistance(vec1, vec2);
    cout << "The Euclidean Distance between two vectors is: " << distance << endl;

    return 0;
}