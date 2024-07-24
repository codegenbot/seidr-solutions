Here is the completed code:

def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        operands = expression.split('&')
        return all(solveBoolean(op) for op in operands)
    elif '|' in expression:
        operands = expression.split('|')
        return any(solveBoolean(op) for op in operands)

# test cases
print(solveBoolean('t'))  # True
print(solveBoolean('f'))  # False
print(solveBoolean('f&f'))  # False
print(solveBoolean('f&t'))  # False
print(solveBoolean('t&f'))  # False