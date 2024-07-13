```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    nesting_level = 0
    for char in expression:
        if char == '(':
            nesting_level += 1
        elif char == ')':
            nesting_level -= 1
        elif nesting_level > 0:
            continue
        elif char in ops:
            b = ops[char](stack.pop(), stack.pop())
            stack.append(b)
        else:
            stack.append(char == 'T')
    return stack[0]