```python
import re

def solve_boolean(expression):
    expression = re.sub(r'\b[tT][rR][uU][eE]\b', 'True', expression)
    expression = re.sub(r'\b[fF][aA][lL][sS][eE]\b', 'False', expression)
    return eval(re.sub(r'&+', ' and ', re.sub(r'\|+', ' or ', expression)))
```