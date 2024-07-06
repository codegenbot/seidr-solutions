#include <iostream>
#include <string>
using namespace std;
int main(){
    int sum=0;
    
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0' * (str[i + 1] != str[i]);
        }
    }
    
     cout<<"Sum of digit is: "<<sum;
}