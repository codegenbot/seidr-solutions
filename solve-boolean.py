```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for part in expression.split('&'):
            if '|' in part:
                raise ValueError("Invalid expression")
            temp = False
            for char in part:
                if char == 'T':
                    temp = True
                elif char == 'F':
                    break
            if not temp:
                result = False
                break
        return result