```python
def paired_digits(digits):
    return sum(int(digits[i]) if digits[i] != '0' else 0 for i in range(1, len(digits)-1) if digits[i-1] == digits[i])
```