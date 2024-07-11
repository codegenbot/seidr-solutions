std::string input;
int len;

std::cout << "Enter a string: ";
std::getline(std::cin, input);
len = input.length();

std::cout << "Middle character(s): " << (len % 2 == 0 ? input.substr(len/2-1, 2) : std::string(1, input[len/2-1])) << std::endl;