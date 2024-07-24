```cpp
#include <vector>
#include <cmath>
#include <cstdio>

double euclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum);
}

int main() {
    // example vectors
    std::vector<float> v1;
    v1.push_back(17);
    v1.push_back(-87.7063676044703);
    v1.push_back(4.167815571591433);
    v1.push_back(-15.638579847128952);
    v1.push_back(-2.7934030378092416);
    v1.push_back(46.25174148703579);
    v1.push_back(-92.88471596141466);
    v1.push_back(79.62935130578882);
    v1.push_back(90.07907986237257);
    v1.push_back(8.763277296921231);
    v1.push_back(46.081440522838506);
    v1.push_back(-75.909099292619);
    v1.push_back(2.7031986316294194);
    v1.push_back(-10.68689436191832);
    v1.push_back(-22.019458184556242);
    v1.push_back(59.05033156012303);
    v1.push_back(56.86699695330955);
    v1.push_back(69.97274753633997);

    std::vector<float> v2;
    v2.push_back(17);
    double dist = euclideanDistance(v1, v2);
    printf("Euclidean distance: %.2f\n", dist);

    return 0;