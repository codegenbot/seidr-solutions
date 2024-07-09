def solve_boolean(expression):
    stack = []
    operators = []
    for char in expression + '&':
        if char in '&|':
            while len(operators) > 0 and operators[-1] != '(':
                operator = operators.pop()
                prev_value = stack.pop()
                result = prev_value
                if operator == '|':
                    result = prev_value or True
                elif operator == '&':
                    result = prev_value and True
                stack.append(result)
            if char == '(':
                operators.append(char)
            else:
                operators.append(char)
        elif char in 'TF':
            stack.append(char == 'T')
    return stack[0]