def solve_boolean(expression):
    stack = []
    operators = {'&': lambda a, b: a and b,
                 '|': lambda a, b: a or b}
    for char in expression:
        if char in {'T', 'F'}:
            stack.append(char == 'T')
        elif char == '(':
            stack.append('(')
        elif char == ')':
            while len(stack) > 1 and stack[-1] != '(':
                stack.pop()
            stack.pop() # pop the matching (
        elif char in {'&', '|'}:
            while len(stack) > 1 and stack[-1] in {'&', '|'}:
                stack.pop()
            if len(stack) >= 2:
                right = stack.pop()
                left = stack.pop()
                stack.append(operators[char](left, right))
    return stack[0]