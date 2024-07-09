std::string input;
std::cout << "Enter a number: ";
input = std::cin.get().rsplit('\n')[0]; 
std::string output = "";
for (char c : input) { 
    int digit = c - '0'; 
    digit *= digit; 
    output += std::to_string(digit); 
}
return output;