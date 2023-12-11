```
def solve_boolean(expression):
    values = {'T': True, 'F': False}
    expression = expression.replace('T', 'True').replace('F', 'False')
    return eval(expression.capitalize(), values)

expression = input()
print(solve_boolean(expression))
```