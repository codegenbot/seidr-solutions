```c++
#include <cstdio>

double snowDay(int hours, float groundSnow, float snowFallRate, float meltingPerHour);

int main() {
    double result = snowDay(5, 10.0f, 2.0f, 0.1f);
    printf("%f\n", result); 
    return 0;
}

double snowDay(int hours, float groundSnow, float snowFallRate, float meltingPerHour) {
    for (int i = 0; i < hours; i++) {
        if (i > 0) {
            groundSnow -= meltingPerHour * (groundSnow - 0.5);
        }
        groundSnow += snowFallRate;
    }
    return groundSnow;
}