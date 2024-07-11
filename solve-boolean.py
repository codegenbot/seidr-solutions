def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        def evaluate(expression):
            if '&' in expression and '|' in expression:
                raise ValueError("Invalid expression")
            stack = []
            for char in reversed(expression):
                if char in {'&', '|'}:
                    b2 = stack.pop()
                    b1 = stack.pop()
                    if char == '&':
                        stack.append(b1 and b2)
                    else:
                        stack.append(b1 or b2)
                elif char in {'T', 'F'}:
                    stack.append(char == 'T')
            return stack[0]

        return evaluate(expression)