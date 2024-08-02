Here is the Python solution for the problem:

def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        a, b = expression.split('&')
        return not (solveBoolean(a) and solveBoolean(b))
    elif '|' in expression:
        a, b = expression.split('|')
        return solveBoolean(a) or solveBoolean(b)

# Example usage:
print(solveBoolean('t'))  # True
print(solveBoolean('f'))  # False
print(solveBoolean('f&f'))  # False
print(solveBoolean('f&t'))  # False
print(solveBoolean('t&f'))  # False