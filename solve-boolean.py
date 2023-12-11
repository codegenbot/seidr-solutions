```
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
```