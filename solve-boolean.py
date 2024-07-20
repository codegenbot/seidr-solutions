def solve_boolean(expression):
    stack = []
    result = None
    for char in expression:
        if char in ['T', 'F']:
            if stack and (stack[-1] == '|' or stack[-1] == '&'):
                top = stack.pop()
                result = eval(f'({result}) {top} {char}')
            else:
                result = char
        elif char in ['|', '&']:
            while stack and stack[-1] != '(':
                if stack[-1] == '|':
                    top = stack.pop()
                    result = f'({result}) | {top}'
                elif stack[-1] == '&':
                    top = stack.pop()
                    result = f'({result}) & {top}'
            stack.append('(')
    return eval(f'{result}')