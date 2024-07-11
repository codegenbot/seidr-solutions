```
def solve_boolean(expression):
    expression = expression.replace("(", "( T | F )").replace(")", " ( ")
    stack = []
    operator_stack = []

    def evaluate():
        if len(operator_stack) == 0:
            return stack[0]
        
        operand2 = stack.pop()
        operand1 = stack.pop()
        
        op = operator_stack.pop()
        
        if op.upper() == "&":
            stack.append(operand1 and operand2)
        elif op.upper() == "|":
            stack.append(operand1 or operand2)

    while len(expression) > 0:
        for char in expression:
            if char.upper() == "T":
                stack.append(True)
            elif char.upper() == "F":
                stack.append(False)
            elif char == "(":
                operator_stack.append(char)
            elif char == ")":
                while len(operator_stack) > 1 and operator_stack[-1].upper() != "(":
                    evaluate()
                operator_stack.pop()
            else:
                if char.upper() in ["&", "|"]:
                    while (
                        len(operator_stack) > 0
                        and operator_stack[-1].upper().isalnum()
                    ):
                        operator_stack.append(char)
                    continue
        
        evaluate()

    return stack[0]