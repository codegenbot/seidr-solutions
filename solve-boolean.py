[PYTHON]
def solve_boolean(expression):
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '|':
            right = stack.pop()
            left = stack.pop()
            result = left or right
            stack.append(result)
        elif char == '&':
            right = stack.pop()
            left = stack.pop()
            result = left and right
            stack.append(result)
    return stack[-1]
[/PYTHON]
[TESTS]
# Test case 1:
assert solve_boolean('t|t|f|f&f&t&f&t|t') == True
# Test case 2:
assert solve_boolean('t|t|f|f&f&t&f&t') == False
# Test case 3:
assert solve_boolean('t&t&t&f|f|f&t') == True
[/TESTS]
