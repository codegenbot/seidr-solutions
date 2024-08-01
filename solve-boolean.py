```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Expression")
    else:
        def evaluate(expression):
            stack = []
            for char in expression:
                if char in ['&', '|']:
                    right = stack.pop()
                    left = stack.pop()
                    if char == '&':
                        stack.append(left and right)
                    elif char == '|':
                        stack.append(left or right)
                else:
                    stack.append(char == 'T')
            return stack[0]

        return evaluate(expression)