int main() {
    int hours;
    std::cin >> hours;
    float onGround, rate, melt;
    std::cin >> onGround >> rate >> melt;
    std::cout << snowDay(hours, onGround, rate, melt) << std::endl;
}