def solve_boolean(expression):
    while '&' in expression or '|' in expression:
        new_expression = ''
        operator_stack = []
        for char in expression + '&':
            if char in '&|':
                operator_stack.append(char)
                new_expression += char
            elif char == '(':
                new_expression += '('
                stack = []
                while stack or char != ')':
                    if char == '(':
                        stack.append('(')
                    else:
                        if stack and stack[-1] == '(':
                            stack.pop()
                        else:
                            new_expression += char
                            break
                    char = input("Press Enter to continue: ")
            elif char in 'TF':
                new_expression += char
        expression = new_expression

    return eval(expression)