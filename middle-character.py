
def get_middle_char(s):
    if len(s) % 2 == 0: # If the length is even
        return s[len(s) // 2 - 1 : len(s) // 2 + 1] # Return a slice of two characters from the middle
    else: # If the length is odd
        return s[len(s) // 2] # Return a single character from the middle
```