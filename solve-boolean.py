Here is the solution in Python:

def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Boolean Expression")
    elif '&' in expression:
        left, right = expression.split('&')
        return not (bool(left) and bool(right))
    elif '|' in expression:
        left, right = expression.split('|')
        return bool(left) or bool(right)

expression = input()
print(solveBoolean(expression))