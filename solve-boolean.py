def solve(expression):
    expression = expression.upper()
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return solve(left) and solve(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return solve(left) or solve(right)

expression = input()
while 't' in expression.lower() or 'f' in expression.lower():
    if 'T' in expression:
        expression = expression.replace('T', '')
    else:
        expression = expression.replace('F', '')

print("Result:", "True" if solve(expression) else "False")