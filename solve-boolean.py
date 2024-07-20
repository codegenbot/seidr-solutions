```
def solve_boolean(expression):
    stack = []
    parsing = True
    for char in expression:
        if char in ['T', 'F']:
            if not parsing:
                return eval(''.join(map(str, stack)))
            stack.append(char)
        elif char in ['|', '&']:
            stack.append(char)
            parsing = (char == '|')
            if parsing:
                if stack and stack[-1] == '&':
                    result = solve_boolean(''.join(stack[:-1]))
                    return result
    if len(stack) > 0: 
        return eval(''.join(map(str, stack)))
    return False