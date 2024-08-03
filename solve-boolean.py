```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        def evaluate(expression):
            stack = []
            for char in reversed(expression):
                if char in {'&', '|'}:
                    right = stack.pop()
                    left = stack.pop()
                    if char == '&':
                        stack.append(left and right)
                    elif char == '|':
                        stack.append(left or right)
                else:
                    stack.append({'T': True, 'F': False}[char])
            return stack[0]

        return evaluate(expression)