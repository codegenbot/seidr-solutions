Here is the Python code to solve the problem:

def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return bool(int(left)) and bool(int(right))
    elif '|' in expression:
        left, right = expression.split('|')
        return bool(int(left)) or bool(int(right))