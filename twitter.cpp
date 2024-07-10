#include<iostream>
#include<string>

int main(){std::string t;getline(std::cin,t);int c=0;for(int i=0;i<t.length();i++){if(t[i]!=' '){c++;}}if(c==0){std::cout<<"You didn't type anything"<<std::endl;}else if(c>140){std::cout<<"Too many characters"<<std::endl;}else{std::cout<<"Your tweet has "<<c<<" characters"<<std::endl;}return 0;}