```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    stack = []
    for c in expression + '|':
        if c in {'|', '&'}:
            while len(stack) >= 2 and ((stack[-1] == '|' and stack[-2] == '|') or (stack[-1] == '&' and stack[-2] == '&')):
                result = eval('({}{}{})'.format(stack.pop(), stack.pop(), c))
                stack.append(result)
        else:
            stack.append(c)

    return bool(int(stack[0]))