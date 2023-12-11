[PYTHON]
def solve_boolean(expression):
    queue = []
    prev_op = None
    for char in expression:
        if char == 'T':
            queue.append(True)
        elif char == 'F':
            queue.append(False)
        elif char == '|':
            operand2 = queue.pop()
            operand1 = queue.pop()
            result = operand1 or operand2
            queue.append(result)
            prev_op = '|'
        elif char == '&':
            operand2 = queue.pop()
            operand1 = queue.pop()
            result = operand1 and operand2
            queue.append(result)
            prev_op = '&'
        else:
            raise ValueError("Invalid character in expression")
    return queue[-1]
[/PYTHON]
[TESTS]
# Test case 1:
assert solve_boolean("T|F") == True
# Test case 2:
assert solve_boolean("T&F") == False
# Test case 3:
assert solve_boolean("T|T&F") == True
# Test case 4:
assert solve_boolean("T|T&T") == True
# Test case 5:
assert solve_boolean("T&T&T") == True
[/TESTS]
