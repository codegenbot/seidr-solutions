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
assert solve_boolean("T|F") == True
# Test case 2:
assert solve_boolean("T&F") == False
# Test case 3:
assert solve_boolean("T|T&F") == True
# Test case 4:
assert solve_boolean("T|F&T") == True
# Test case 5:
assert solve_boolean("T&T|F") == True
# Test case 6:
assert solve_boolean("T&F|T") == False
# Test case 7:
assert solve_boolean("T|T&T&F") == True
# Test case 8:
assert solve_boolean("T|F&T&T") == True
# Test case 9:
assert solve_boolean("T&T|F&T") == True
# Test case 10:
assert solve_boolean("T&F|T&T") == False
[/TESTS]
