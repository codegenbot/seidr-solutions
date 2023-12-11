[PYTHON]
def solve_boolean(expression):
    stack = []
    precedence = {'|': 1, '&': 2}
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char in precedence:
            op = stack.pop()
            while len(stack) > 0 and precedence[op] <= precedence[stack[-1]]:
                a = stack.pop()
                b = stack.pop()
                stack.append(a or b)
            stack.append(op)
        else:
            op = stack.pop()
            if op == '|':
                a = stack.pop()
                b = stack.pop()
                stack.append(a or b)
            elif op == '&':
                a = stack.pop()
                b = stack.pop()
                stack.append(a and b)
    return stack[-1]
[/PYTHON]
[TESTS]
# Test case 1:
assert solve_boolean("T|F|T") == True
# Test case 2:
assert solve_boolean("T&F|T") == True
# Test case 3:
assert solve_boolean("T|F&T") == True
# Test case 4:
assert solve_boolean("T&F&T") == False
# Test case 5:
assert solve_boolean("T|F|T|F") == True
[/TESTS]
