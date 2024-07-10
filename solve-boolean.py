```
def solve_boolean(expression):
    result = True
    for i in range(len(expression)):
        if expression[i] == 'T':
            pass
        elif expression[i] == 'F':
            return False
        elif expression[i] == '&':
            result = all(expression[j] == 'T' for j in range(i+1, len(expression)))
        elif expression[i] == '|':
            result = any(expression[j] == 'F' for j in range(0, i))
    return result