def solve_boolean(expression):
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    current_number = ''
    in_parens = False
    for char in expression:
        if char == '(':
            in_parens = True
        elif char == ')':
            in_parens = False
        elif char not in 'TF' and char not in ops:
            while stack and isinstance(stack[-1], bool):
                stack.pop()
            stack.append(True if char == 'T' else False)
        elif char in 'TF':
            while stack and isinstance(stack[-1], bool) and in_parens:
                stack.pop()
            if current_number:
                stack.append(True if char == 'T' else False)
                current_number = ''
        elif char in ops:
            while stack and isinstance(stack[-1], bool) and in_parens:
                stack.pop()
            if current_number:
                stack.append(True if char == 'T' else False)
                current_number = ''
            b = ops[char](stack.pop(), stack.pop())
            stack.append(b)
        else:
            current_number += char
    return stack[0]