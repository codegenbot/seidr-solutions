Here is the Python solution for the problem:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return bool(int(left)) & bool(int(right))
    elif '|' in expression:
        left, right = expression.split('|')
        return bool(int(left)) | bool(int(right))

expression = input()
print(solve_boolean(expression))