```python
def middle_character(string):
    filtered_string = ''.join(c for c in string if c.isalpha())
    length = len(filtered_string)
    if length % 2 == 0:
        return filtered_string[length // 2 - 1:length // 2 + 1]
    else:
        return filtered_string[length // 2]
```