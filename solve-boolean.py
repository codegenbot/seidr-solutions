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
                if stack:
                    stack.append(stack.pop() == 'T')
                else:
                    break
        elif len(stack) >= 1:
            break
    return stack.pop() == 'T' if stack else None

print(solve_boolean('f&f&f|f|f|t|t&t|t&f|t&t&f|t&t|f'))