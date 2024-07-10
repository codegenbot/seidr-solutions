def solve_boolean(expression):
    stack = []
    result = None
    operator = ''
    
    for char in expression:
        if char in ['T', 'F']:
            if operator:
                # handle operator with previous operand
                if operator == '|':
                    result = result or (char == 'T')
                elif operator == '&':
                    result = result and (char == 'T')
                stack = [result]
                operator = ''
                result = None
            else:
                stack.append(char == 'T')
        elif char in ['|', '&']:
            if operator:
                # handle previous operator with this operand
                if operator == '|':
                    stack.append(result or (char == 'T'))
                elif operator == '&':
                    stack.append(result and (char == 'T'))
                result = None
            operator = char
    
    return stack[0]