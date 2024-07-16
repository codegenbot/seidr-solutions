def solve_boolean(expression):
    stack = []
    for char in expression:
        if char in {'&', '|'}:
            while len(stack) > 1 and stack[-1] in {'&', '|'}:
                op = stack.pop()
                result = eval(f"{stack[-2]} {op} {char}")
                stack.append(str(result))
        elif char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                stack.pop()
            stack.pop()  # Discard the '('
        else:  
            stack.append(char)
    return eval(' '.join(stack))