```
def solve_boolean(expression):
    stack = []
    operator_stack = []

    def evaluate(expression):
        if expression == "T":
            return True
        elif expression == "F":
            return False

        for char in expression:
            if char.upper() == "T":
                stack.append(True)
            elif char.upper() == "F":
                stack.append(False)
            elif char == "(":
                operator_stack.append(char)
            elif char == ")":
                while operator_stack[-1] != "(":
                    operand2 = stack.pop()
                    operand1 = stack.pop()
                    if operator_stack[-1] == "&":
                        stack.append(operand1 and operand2)
                    elif operator_stack[-1] == "|":
                        stack.append(operand1 or operand2)
                    operator_stack.pop()
                operator_stack.pop()  
            else:
                if char.upper() in ["&", "|"]:
                    while len(operator_stack) > 0 and operator_stack[-1].upper() != "(":
                        operand2 = stack.pop()
                        operand1 = stack.pop()
                        if operator_stack[-1] == "&":
                            stack.append(operand1 and operand2)
                        elif operator_stack[-1] == "|":
                            stack.append(operand1 or operand2)
                        operator_stack.pop()

        while len(operator_stack) > 0:
            operand2 = stack.pop()
            operand1 = stack.pop()
            if operator_stack[-1].upper() == "&":
                stack.append(operand1 and operand2)
            elif operator_stack[-1].upper() == "|":
                stack.append(operand1 or operand2)
            operator_stack.pop()

        return stack[0]

    return evaluate(expression)