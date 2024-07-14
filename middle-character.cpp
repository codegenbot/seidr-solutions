```cpp
string middleCharacter(string str) {
    int len = str.length();
    string result;
    
    if(len % 2 == 0){
        int mid1 = len / 2 - 1;
        int mid2 = len / 2;
        result = str.substr(mid1, 2);
    } else {
        int mid = len / 2;
        result = str.substr(mid, 1);
    }
    
    return result;
}