```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    def evaluate(expression):
        stack = []
        for char in expression + '&':
            if char == '&':
                right = stack.pop()
                left = stack.pop()
                if right == 'T' and left == 'T':
                    stack.append('T')
                elif right == 'F' or (right == 'T' and left == 'F'):
                    stack.append('F')
                else:
                    stack.append('&')
            elif char == '|':
                right = stack.pop()
                left = stack.pop()
                if right == 'T' and left == 'T':
                    stack.append('T')
                elif right == 'F' or (right == 'T' and left == 'F'):
                    stack.append('F')
                else:
                    stack.append('|')
            else:
                stack.append(char)
        return stack.pop()

    return evaluate(expression)