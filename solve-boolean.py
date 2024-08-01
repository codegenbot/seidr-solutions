Here's a Python function that evaluates and returns the resulting Boolean value of a given string expression:

```python
def solveBoolean(expression):
    def evaluateBoolean(expr):
        if expr == 'T':
            return True
        elif expr == 'F':
            return False
        elif '&' in expr:
            parts = expr.split('&')
            for part in parts:
                if part != 'f' and part != 'F':
                    return False
            return True
        elif '|' in expr:
            parts = expr.split('|')
            for part in parts:
                if part != 't' and part != 'T':
                    return False
            return True

    return evaluateBoolean(expression)