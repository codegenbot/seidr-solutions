```cpp
int len = 0;
for (char c : tweet) {
    if (c >= ' ') { 
        len++;
    }
}
return "Your tweet has " + to_string(len) + " characters";