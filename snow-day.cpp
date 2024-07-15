int main() {
    int hours = 5;
    float groundSnow = 10.0f;
    float rate = 1.0f;
    float melt = 2.0f;

    float result = snowDay(hours, groundSnow, rate, melt);

    std::cout << "After " << hours << " hours, there will be " << result << " inches of snow." << std::endl;

    return 0;
}