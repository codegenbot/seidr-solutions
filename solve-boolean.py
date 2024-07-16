    def solve_boolean(expression):
        def evaluate_expression(expression):
            operators = {'&': lambda x, y: str(int(x) and int(y)),
                         '|': lambda x, y: str(int(x) or int(y))}
            stack = []
            for char in expression:
                if char in ['(', '&', '|']:
                    stack.append(char)
                elif char == ')':
                    while stack[-1] != '(':
                        operator = stack.pop()
                        if operator in operators:
                            right = stack.pop()
                            left = stack.pop()
                            result = str(operators[operator](left, right))
                            stack.append(result)
                    stack.pop()  # Remove the '('
                elif char not in ['(', ')']:
                    if char == 'T':
                        stack.append('1')
                    elif char == 'F':
                        stack.append('0')
                    else:
                        stack.append(char)
            return 'T' if stack[-1] == '1' else 'F'

        return evaluate_expression(expression)