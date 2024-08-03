```
def solve_boolean(expression):
    def evaluate(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif '&' in expression and '|' in expression:
            raise ValueError('Invalid expression')
        stack = []
        for char in expression[::-1]:
            if char == '&':
                right, left = stack.pop(), stack.pop()
                stack.append(left and right)
            elif char == '|':
                right, left = stack.pop(), stack.pop()
                stack.append(left or right)
            else:
                stack.append(char == 'T')
        return stack[0]

    return str(evaluate(expression))