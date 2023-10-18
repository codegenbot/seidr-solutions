#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    int len = str.length();
    if(len%2==1){
        cout<<str[len/2];
    }else{
        cout<<str[len/2-1]<<str[len/2];
    }
}
