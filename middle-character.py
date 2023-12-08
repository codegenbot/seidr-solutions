```python
def middle_character(s):
    middle = len(s) // 2
    return s[middle] if len(s) % 2 == 1 else s[middle-1:middle+1]
```