```python
def solve_boolean(expression):
    while "&" in expression or "|" in expression:
        if "&" in expression:
            expression = expression.replace("&", " && ")
        if "|" in expression:
            expression = expression.replace("|", " | ")
    return eval(expression)