
[PYTHON]
def evaluate(expression):
    result = True
    stack = []
    for char in expression:
        if char == '|':
            stack.append('|')
        elif char == '&':
            stack.append('&')
        elif char == 'T' or char == 'F':
            result = (char == 'T')
        else:
            if not stack:
                return False
            op = stack.pop()
            if op == '|':
                result |= evaluate(expression[i + 1:])
            elif op == '&':
                result &= evaluate(expression[i + 1:])
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert evaluate("T|F&F|T&T&F&T|F|F|F|F&F|F&F&T&T&T|T") == True
# Test case 2:
assert evaluate("T&F") == False
# Test case 3:
assert evaluate("T|F") == True
[/TESTS]
