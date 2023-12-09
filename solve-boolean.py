```python
def solve_boolean(expression):
    return eval(expression.replace('T', 'True').replace('F', 'False'), {"True": True, "False": False})
expression = input()
print(solve_boolean(expression))
```