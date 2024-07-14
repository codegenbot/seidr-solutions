Here is the Python code for the problem:

def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        parts = expression.split('&')
        return all(solveBoolean(part) for part in parts)
    elif '|' in expression:
        parts = expression.split('|')
        return any(solveBoolean(part) for part in parts)

expression = input()
print(solveBoolean(expression))