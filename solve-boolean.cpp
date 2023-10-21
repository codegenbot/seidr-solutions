#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream outFile;
    std::ifstream inFile;
    std::string fileName;
    std::string line;

    std::cout << "Enter the name of the file you would like to read from: ";
    std::cin >> fileName;

    inFile.open(fileName);

    if (inFile.fail())
    {
        std::cout << "File did not open" << std::endl;
        exit(1);
    }

    std::cout << "Enter the name of the file you would like to write to: ";
    std::cin >> fileName;

    outFile.open(fileName);

    if (outFile.fail())
    {
        std::cout << "File did not open" << std::endl;
        exit(1);
    }

    while (!inFile.eof())
    {
        std::getline(inFile, line);
        outFile << line << std::endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}
