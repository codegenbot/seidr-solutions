def solve_boolean(expression):
    stack = []
    parsing = True
    for char in expression:
        if char in ['T', 'F']:
            if not parsing:
                result = eval(''.join(map(str, stack)))
                stack = []
                parsing = bool(result)
            stack.append(char)
        elif char in ['|', '&']:
            if char == '&':
                stack[-1] = f'({stack[-1]} & '
            else:
                stack[-1] = f'({stack[-1]} | ' 
    return eval(''.join(map(str, [stack[0][:-2]])))