```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    stack = []
    result = None
    for c in expression:
        if c in ['&', '|']:
            while stack and stack[-1] != '(':
                op = stack.pop()
                if op == '&':
                    result = result and (c == 'T')
                elif op == '|':
                    result = result or (c == 'T')
            if c == '(':
                stack.append(c)
            else:
                stack.append(c)
        elif c == '(':
            stack.append(c)
        elif c == ')':
            while stack and stack[-1] != '(':
                op = stack.pop()
                if op == '&':
                    result = result and (expression[stack.index(c)+1:] == 'T')
                elif op == '|':
                    result = result or (expression[stack.index(c)+1:] == 'T')
            stack.pop()
    return result