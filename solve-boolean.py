def solve(expression):
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

expression = input().upper()
while '&' in expression or '|' in expression:
    if '&' in expression:
        left, right = expression.split('&')
        expression = '{}&{}'.format(solve(left), solve(right))
    elif '|' in expression:
        left, right = expression.split('|')
        expression = '{}|{}'.format(solve(left), solve(right))

print("Result:", "True" if expression == 'T' else "False")