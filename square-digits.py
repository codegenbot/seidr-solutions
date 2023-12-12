```
def square_digits(n):
    return ''.join([str(int(i)**2) for i in str(n)])
```
This function takes a positive integer `n` as input and returns a string where each digit of `n` is squared and concatenated. The function first converts the integer to a string using `str()` and then iterates over each character of the string using a list comprehension. For each character, it squares the integer value of the character using `int(i)**2` and adds it to a new string using `''.join()`. Finally, the function returns the concatenated string.