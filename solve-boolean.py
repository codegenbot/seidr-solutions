```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = eval(' '.join(map(lambda x: str(x) if x not in '&|' else f"({x})" if x == '&' else f"{x}", expression)))
        return result