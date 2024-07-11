```
def solve(expression):
    expression = expression.upper()
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        result1 = solve(left)
        result2 = solve(right)
        return result1 and result2
    elif '|' in expression:
        left, right = expression.split('|')
        result1 = solve(left)
        result2 = solve(right)
        return result1 or result2

expression = input()
print("Result:", "True" if solve(expression) else "False")