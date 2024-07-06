#include <string>
using namespace std;

int main(int argc, char** argv) {
    int number = atoi(argv[1]); // get input from user
    string result = squareDigits(number); // call the function to square digits and concatenate them into a string
    cout << result << endl; // print the result to console
}