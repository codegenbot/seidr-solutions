```
def solve(input_str):
    def eval_bool_exp(exp):
        operators = {'|': lambda a, b: a or b, '&': lambda a, b: a and b}
        if any(c not in 'TF&|' for c in exp):
            return None
        stack = []
        for char in reversed(exp):
            if char in '&|':
                operator = operators[char]
                right = stack.pop()
                left = stack.pop()
                stack.append(operator(left, right))
            elif char == 'T':
                stack.append(True)
            elif char == 'F':
                stack.append(False)
        return stack[0]

    return eval_bool_exp(input_str)