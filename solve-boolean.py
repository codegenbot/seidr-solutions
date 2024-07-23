```
import ast

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    expression = expression.replace('&&', 'and').replace('||', 'or')

    try:
        result = eval(f"({expression})")
        return result
    except:
        return "Invalid input"