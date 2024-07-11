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

print("Result:", "True" if solve('t') else "False")
print("Result:", "True" if solve('f') else "False")
print("Result:", "False" if solve('f&f') else "True")
print("Result:", "False" if solve('f&t') else "True")
print("Result:", "False" if solve('t&f') else "True")