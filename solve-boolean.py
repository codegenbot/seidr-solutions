```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        stack = []
        for char in expression[::-1]:
            if char in ['&', '|']:
                stack.append(char)
            else:
                while stack and stack[-1] != (char == '&' or char == '|'):
                    if char == '&':
                        stack.pop()
                    elif char == '|':
                        stack.pop()
                if stack:
                    stack.pop()
        return True