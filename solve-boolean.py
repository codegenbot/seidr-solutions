```python
def solve_boolean(expression):
    while "&" in expression or "|" in expression:
        if "&" in expression:
            expression = expression.replace("&", " and ")
        if "|" in expression:
            expression = expression.replace("|", " or ")
    return eval(expression)