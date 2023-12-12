```python
import re

def solve_boolean():
    expression = input("Enter a boolean expression: ")
    expression = re.sub(r'\b[tT]\b', 'True', expression)
    expression = re.sub(r'\b[fF]\b', 'False', expression)
    return eval(expression.replace('&', ' and ').replace('|', ' or '))
```