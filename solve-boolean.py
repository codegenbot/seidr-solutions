def solve_boolean(expression):
    stack = []
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char)
        elif char in ['|', '&']:
            while len(stack) >= 2 and stack[-1] == '&' and (char == '|' or stack[-2] == '|'):
                a = stack.pop() == 'T'
                b = stack.pop() == 'T'
                stack.append(a and b)
            if char == '&':
                if len(stack) >= 2 and stack[-1] == 'T' and stack[-2] == 'T':
                    stack.pop()
                    stack.pop()
                    stack.append(False)
                else:
                    stack.append(stack.pop() == 'T')
    return stack.pop() == 'T'

print(solve_boolean('f&f&f|f|f|t|t&t|t&f|t&t&f|t&t|f'))