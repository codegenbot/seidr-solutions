```
def solve_boolean(expression):
    def parse_expression(expression):
        if not expression:
            return []
        ops = ['&', '|']
        if expression[0] in ops:
            return [expression[0]] + parse_expression(expression[1:])
        elif expression[0] in ['T', 'F']:
            return [expression[0]] + parse_expression(expression[1:])
        else:
            raise ValueError("Invalid expression")
    
    def evaluate_stack(stack):
        if len(stack) == 1:
            return stack[0]
        op = stack.pop()
        a, b = stack.pop(), stack.pop()
        if op == '&':
            return a and b
        elif op == '|':
            return a or b

    stack = parse_expression(expression)
    result = evaluate_stack(stack)
    return result