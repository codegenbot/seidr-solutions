int main() {
    std::cout << mastermind("RRRR", "RRRR").at(0) << "\n" << mastermind("RRRR", "RRRR").at(1) << std::endl;
    std::cout << mastermind("BOYG", "GYOB").at(0) << "\n" << mastermind("BOYG", "GYOB").at(1) << std::endl;
    std::cout << mastermind("WYYW", "BBOG").at(0) << "\n" << mastermind("WYYW", "BBOG").at(1) << std::endl;
    std::cout << mastermind("GGGB", "BGGG").at(0) << "\n" << mastermind("GGGB", "BGGG").at(1) << std::endl;
    std::cout << mastermind("BBBB", "OOOO").at(0) << "\n" << mastermind("BBBB", "OOOO").at(1) << std::endl;

    return 0;
}