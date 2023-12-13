```python
def solve_boolean(expression):
    expression = expression.replace('&', ' and ')
    expression = expression.replace('|', ' or ')
    expression = expression.replace('T', 'True').replace('F', 'False')
    return eval(expression)
```