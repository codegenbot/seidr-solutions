
```python
def middle_character(s):
    if len(s) % 2 == 0:
        return s[len(s)//2-1:len(s)//2+1]
    else:
        return s[len(s)//2]
```
This code handles both odd and even length strings, returning the middle character as a string if the length is odd, and the two middle characters as a string if the length is even.