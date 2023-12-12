```python
def square_digits(num):
    return ''.join(str(int(digit)**2) for digit in str(num))

num = int(input())
result = square_digits(num)
print(result)
```