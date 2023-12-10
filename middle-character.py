```python
def middle_character(s):
    length = len(s)
    if length % 2 == 1:
        return s[length // 2] if s else ""
    else:
        return s[length // 2 - 1: length // 2 + 1]
```