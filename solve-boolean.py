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
            if len(stack) >= 2:
                parent = stack.pop()
                subexpr = solve_boolean(''.join(stack))
                stack.append(subexpr)
                if parent == '&':
                    stack.append(stack.pop() == 'T' and stack.pop() == 'T')
                elif parent == '|':
                    stack.append(stack.pop() or stack.pop())
        else:
            break
    return stack.pop() if stack else None

print(solve_boolean("f&f&f|f|f|t|t&t|t&f|t&t&f|t&t|f"))