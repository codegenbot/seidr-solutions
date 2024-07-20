```python
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    else:
        stack = []
        for char in expression:
            if char == '&':
                stack.append('and')
            elif char == '|':
                while len(stack) > 1 and stack.pop() == 'and':
                    pass
                stack.append('or')
            elif char in ['T', 'F']:
                while stack and stack[-1] == 'or':
                    if stack.pop() == 'or' and (char == 'T'):
                        return True
                    if stack.pop() == 'or' and char == 'F':
                        return False
                if stack and stack[-1] == 'and':
                    if stack.pop() == 'and' and char == 'T':
                        return True
                    if stack.pop() == 'and' and char == 'F':
                        return False
        return not bool(stack)