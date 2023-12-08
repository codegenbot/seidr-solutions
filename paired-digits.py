```python
def paired_digits(digits):
    return sum(int(digits[i]) for i in range(1, len(digits)) if digits[i-1] == digits[i])
```