```
def solve_boolean(expression):
    result = True
    i = 0
    while i < len(expression):
        if expression[i] == 'T':
            i += 1
        elif expression[i] == 'F':
            return False
        elif expression[i] == '&':
            i += 1
            if any(c != 'T' for c in expression[i:]):
                result = False
        elif expression[i] == '|':
            i += 1
            if any(c == 'F' for c in expression[:i]):
                result = True
                break
    return result