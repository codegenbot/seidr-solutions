import re

def solve_boolean(expression):
    # Replace all occurrences of '|' with 'or' and '&' with 'and'
    expression = re.sub('\|', ' or ', expression)
    expression = re.sub('&', ' and ', expression)
    
    # Evaluate the expression using eval()
    result = eval(expression)
    
    return result
```