```
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
        if '&' in left or '&' in right:
            return solve(left) and solve(right)
        if '|' in left or '|' in right:
            return solve(left) or solve(right)
        return solve(left) or solve(right)

print("Result:", "True" if solve('f|f|f&t|t|t|t|f|t&f|f') else "False")