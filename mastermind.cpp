int white;
int black;

std::tie(white, black) = mastermind(code, guess);
std::cout << "White pegs: " << white << ", Black pegs: " << black << std::endl;