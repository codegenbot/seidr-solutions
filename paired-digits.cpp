#include <iostream>
#include <string>
using namespace std;
int main()
{
   string str;
   cin >> str;
   int sum = 0;
   for(int i = 0;i<str.size()-1;i++){
       if (str[i] == str[i+1]) {
           sum += str[i] - '0';
        }
    }
    cout << "Sum: "<<sum << endl;
}