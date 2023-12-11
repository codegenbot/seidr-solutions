
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
assert evaluate("t|f&f|t&t&f&t|f|f|f|f&f|f&f&t&t&t|t") == True
# Test case 2:
assert evaluate("t&t|t") == True
# Test case 3:
assert evaluate("t|f&f|t&t&f&t|f|f|f|f&f|f&f&t&t&t|t") == True
[/TESTS]
