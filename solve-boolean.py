def solve_boolean(expression):
    stack = []
    for char in expression:
        if char in ['T', 'F']:
            stack.append(char)
        elif char in ['|', '&']:
            while stack and (stack[-1] == '&' or ((stack[-1] == '|') and stack[-2].startswith('|'))):
                stack.pop()
            if char == '&':
                stack.append('&')
            else:
                stack.append('|')