```
def solve_boolean(expression):
    stack = []
    operator_stack = []
    operators = {'&':1, '|':2}
    precedence = {'&':1, '|':2}

    for char in expression:
        if char in ['T', 'F']:
            stack.append(char)
        elif char in ['|', '&']:
            while (operator_stack and 
                   operator_stack[-1] in operators and
                   operators[operator_stack[-1]] >= precedence[char]):
                evaluate_operator(stack, operator_stack.pop())
            operator_stack.append(char)

    while operator_stack:
        evaluate_operator(stack, operator_stack.pop())

    return stack[0] == 'T' if stack else None

def evaluate_operator(stack, operator):
    a = stack.pop() == 'T'
    b = stack.pop() == 'T'
    
    if operator == '&':
        stack.append(a and b)
    elif operator == '|':
        stack.append(a or b)

return stack[0] == 'T' if stack else None