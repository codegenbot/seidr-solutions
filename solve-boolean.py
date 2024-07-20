```
def solve_boolean(expression):
    ops = ['&', '|']
    stack = []
    result = True if expression[0] == 'T' else False
    bracket_depth = 1

    for char in expression:
        if char == '(':
            bracket_depth += 1
        elif char == ')':
            while bracket_depth > 1:
                op = stack.pop()
                if op == '&':
                    result = result and (stack[-1] == 'T')
                elif op == '|':
                    result = result or (stack[-1] == 'T')
                bracket_depth -= 1
        elif char in ops:
            while bracket_depth > 1 and stack[-1] in ops:
                op = stack.pop()
                if op == '&':
                    result = result and (stack[-1] == 'T')
                elif op == '|':
                    result = result or (stack[-1] == 'T')
            stack.append(char)
        else:
            if char != 'T' and char != 'F':
                raise ValueError("Invalid operation")
            if bracket_depth > 1:
                stack.append(char)
            else:
                result = char

    return result