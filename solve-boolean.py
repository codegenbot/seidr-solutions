```
def solve(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&', 1)
        return not bool(solve(left)) and not bool(solve(right))
    elif '|' in expression:
        left, right = expression.split('|', 1)
        return bool(solve(left)) or bool(solve(right))

print("Result:", solve('t'))
print("Result:", solve('f'))
print("Result:", "False" if solve('f&f') else "True")
print("Result:", "False" if solve('f&t') else "True")
print("Result:", "False" if solve('t&f') else "True")