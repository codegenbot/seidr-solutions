```python
def square_digits(n: int) -> str:
    return ''.join(str(int(d)**2) for d in str(n))
```