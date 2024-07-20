def solve_boolean(expression):
    stack = []
    parsing = True
    for char in expression[::-1]:  
        if char in ['T', 'F']:
            if parsing:
                stack.append(char)
            else:
                term = ''.join(stack)[::-1]  
                if term[0] == '&':
                    result = eval(f'({term} & False)')
                elif term[0] == '|':
                    result = eval(f'({term} | True)')
                stack = [str(result)]
                parsing = not parsing
        elif char in ['|', '&']:
            if char == '&':
                stack[-1] = f'{stack[-1]} & '
            else:
                stack[-1] = f'{stack[-1]} | ' 
    return eval(''.join(map(str, [stack[0]])))