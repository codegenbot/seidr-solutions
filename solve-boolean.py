```
def solve_boolean(expression):
    def evaluate(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        
        result = None
        operator = ''
        for char in expression:
            if char.upper() == 'T':
                stack.append(True)
            elif char.upper() == 'F':
                stack.append(False)
            elif char in '|&':
                while operator_stack and precedence(operator_stack[-1]) <= precedence(char):
                    apply_operator()
                operator_stack.append(char)
            elif char == '(':
                operator_stack.append(char)
            elif char == ')':
                while operator_stack[-1] != '(':
                    apply_operator()
                operator_stack.pop()  # Remove '('
        while operator_stack:
            apply_operator()

        return stack[0]

    stack = []
    operator_stack = []
    precedence = {'|': 1, '&': 2}
    def apply_operator():
        operand2 = stack.pop()
        operand1 = stack.pop()
        if operator_stack[-1] == '|':
            stack.append(operand1 or operand2)
        elif operator_stack[-1] == '&':
            stack.append(operand1 and operand2)
        operator_stack.pop()

    return evaluate(expression)