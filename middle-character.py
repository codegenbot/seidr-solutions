```python
def middle_character(string):
    length = len(string)
    mid = length // 2

    return string[mid] if length % 2 else string[mid-1:mid+1]
```