````
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    operations = {'&': lambda a, b: a and b, '|': lambda a, b: a or b}
    stack = []
    for char in expression:
        if char in operations:
            b = stack.pop()
            a = stack.pop()
            stack.append(operations[char](a, b))
        else:
            stack.append(char == 'T')
    return stack[0]
```