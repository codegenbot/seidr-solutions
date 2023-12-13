```python
def solve_boolean(expression):
    expression = expression.replace('|', ') or (').replace('&', ') and (').replace('T', 'True').replace('F', 'False')
    expression = f'({expression})'
    return eval(expression)
```