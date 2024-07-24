Here is the solution:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for term in expression.split('&'):
            if any(char in term for char in '|'):
                if '|' not in term or '&' in term:
                    result = False
                break
            else:
                if 'F' in term:
                    return False
                elif 'T' in term:
                    continue
                else:
                    raise ValueError("Invalid expression")
        return result