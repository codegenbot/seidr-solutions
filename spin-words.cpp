#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
#include <algorithm>
using namespace std;
/*
Given a string of one or more words (separated by spaces), reverse all of the words that are ﬁve or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
*/
/*
void find_max_min(string& s, int& max_index, int& min_index, int len) {
    for(int i = s.size()-len-1; i >= 0; --i)
    {
        switch(s[i+len]) {
            case '9':
                if(s[i] != '9') {
                    max_index = i;
                }
                break;
            case '1':
                if(s[i] != '1') {
                    min_index = i;
                }
                break;
            case '8':
                if(s[i] == '9')
                    max_index = i;
                else if(s[i] == '7')
                    min_index = i;
                break;
            case '7':
                if(s[i] == '9')
                    max_index = i;
                else if(s[i] == '1')
                    min_index = i;
                break;
        }
        
        if(max_index >= 0 && min_index >= 0) break;
    }
}
*/
void find_max_min(string& s, int& max_index, int& min_index, int len) {
    for(int i = s.size()-len-1; i >= 0; --i)
    {
        switch(s[i+len]) {
            case '1':
                if(s[i] != '1') {
                    min_index = i;
                    max_index = i;
                }
                break;
            case '7':
                if(s[i] == '3') 
                    min_index = i;
                else if(s[i] == '9') max_index = i;
                break;
            case '9':
                if(s[i] != '9') {
                    max_index = i;
                }
                break;
            case '3':
                if(s[i] == '1') min_index = i;
                break;
        }
        
        if(max_index >= 0 && min_index >= 0) break;
    }
}

char padding(char p) {
    if(p == '1')
        return '7';
    else if(p == '7') return '3';
    else
        return '1';
}

string maximize(string number) { //change get min function
    if(number.size() % 2 == 0) {
        number[number.size()/2] = '0';
        number[number.size()/2-1] = '0';
    }
    else
        number[number.size()/2] = '0';
    
    int max_sum = 0, min_sum = 0;
    cout <<"~~~~ number " << number <<endl;
    for(int i = 0; i < number.size()/2; ++i) {
        if(number.size()-i-1 >= i) {
            int max_index = -1, min_index = -1;
            find_max_min(number, max_index, min_index, i);
            if(max_index >= 0) {
                max_sum += ((number[max_index]-'0') + 1)*pow(10, i);
                min_sum += ((number[max_index]-'0') - 1)*pow(10, i);
                number[max_index] = '9';
            } else if(min_index >= 0) {
                min_sum += ((number[min_index]-'0')-1)*pow(10, i);
                max_sum += ((number[min_index]-'0')+1)*pow(10, i);
                number[min_index] = padding(number[min_index]);
            } else if(i != 0 && number[i] != '0') {
                max_sum += pow(10, i);
            } else if(i == 0 && number[i] == '0') {
                max_sum += 5;
                min_sum += 1+pow(10, i);
            }
            else if(i == 0 && number[i] == '3') {
                max_sum += 4;
            }
        } 
    }
    cout << "min_sum " << min_sum << " max_sum " << max_sum<<endl;
    if(number.size() % 2 == 1) {
        if(number.size()/2-1 >= 0)
            number[number.size()/2-1] = '0';
        number[number.size()/2] = '0';
        int rem = min_sum%10;
        min_sum -= rem;
        max_sum += rem-1;
        min_sum += pow(10, number.size()/2);
        int min_diff = INT_MAX, max_diff = INT_MAX;
        for(int i = 0; i < 10; ++i) {
            int cur_max_sum = max_sum + pow(10, number.size()/2)+i;
            int cur_min_sum = min_sum + pow(10, number.size()/2)+i;
            int cur_diff = cur_max_sum - cur_min_sum; 
            if (cur_diff < min_diff) {
                min_diff = cur_diff;
                number[number.size()/2] = i+'0';
            }
            if (cur_diff < max_diff && cur_diff > min_diff) {
                max_diff = cur_diff;
                number[number.size()/2] = i+'0';
            }
            else if(cur_diff < max_diff && cur_diff == min_diff && cur_max_sum > max_sum) {
                max_diff = cur_diff;
                number[number.size()/2] = i+'0';             
            }
        }
    } else {
        int rem = min_sum % 10;
        min_sum -= rem;
        max_sum += rem-1;
        number[number.size()/2] = rem+'0';
        number[number.size()/2-1] = rem+'0';
        if(max_sum-min_sum == 1 && number.size()/2-1 >= 0) {
            number[number.size()/2-1] = '0';
            number[number.size()/2] = '0';
        }
    }
    return number;
}

int main() {
    cout << maximize("1800222222222") <<endl;
}
