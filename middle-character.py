
Here's one way to solve this problem:
```python
def middle_character(string):
    if len(string) % 2 == 0:
        return string[len(string) // 2 - 1 : len(string) // 2 + 1]
    else:
        return string[len(string) // 2]
```