Here is the solution:

def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        def evaluate_expression(expression):
            stack = []
            for char in reversed(expression):
                if char == '&':
                    a = stack.pop()
                    b = stack.pop()
                    stack.append(a and b)
                elif char == '|':
                    a = stack.pop()
                    b = stack.pop()
                    stack.append(a or b)
                else:
                    stack.append(char == 't')
            return stack[0]
        return evaluate_expression(expression)