def solve_boolean(expression):
    operators = {
        '|' : lambda x, y: x or y,
        '&' : lambda x, y: x and y
    }

    def evaluate_postfix(postfix):
        stack = []
        for char in postfix:
            if char in ('T', 'F'):
                stack.append(char)
            elif char in operators:
                operator = operators[char]
                right = stack.pop()
                left = stack.pop()
                stack.append(operator(left == 'T', right == 'T'))
        return stack[0] == 'T'

    operator_precedence = {'|': 1, '&': 2}
    output_queue = []
    operator_stack = []
    for char in expression:
        if char in ('T', 'F'):
            output_queue.append(char)
        elif char in operators:
            while operator_stack and operator_stack[-1] != '(' and operator_precedence[operator_stack[-1]] >= operator_precedence[char]:
                output_queue.append(operator_stack.pop())
            operator_stack.append(char)
        elif char == '(':
            operator_stack.append(char)
        elif char == ')':
            while operator_stack and operator_stack[-1] != '(':
                output_queue.append(operator_stack.pop())
            operator_stack.pop()

    while operator_stack:
        output_queue.append(operator_stack.pop())

    return evaluate_postfix(output_queue)