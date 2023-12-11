```python
def solve_boolean(expression):
    return eval(expression.replace('T', 'True').replace('F', 'False'))

print(solve_boolean('t|f|f&f&t&t&f'))  # Output: False
```