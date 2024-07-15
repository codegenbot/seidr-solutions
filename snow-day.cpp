int main() {
    int hours = 5; 
    float groundSnow = 10.0f;
    float rate = 2.0f;
    float melt = 1.0f;

    float result = snowDay(hours, groundSnow, rate, melt);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << std::endl;
    return 0;
}