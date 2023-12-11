```python
import re

def solve_boolean(expression):
    return eval(re.sub(r'[T|F]', lambda match: match.group(0)=='T', expression, flags=re.I))
```