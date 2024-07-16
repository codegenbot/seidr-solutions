def solve_boolean(expression):
    def evaluate(start=0):
        if start >= len(expression):  
            return None
        if expression[start] in ["T", "F"]:
            return expression[start] == "T"
        elif expression[start] == "(":
            i = 1
            while expression[i] != ")":
                i += 1
            return "(%s)" % evaluate(i + 1)[1:-1]
        operators = {"&": lambda x, y: x and y, "|": lambda x, y: x or y}
        op_stack = []
        current_val = None
        for char in expression:
            if char == "(":
                op_stack.append(char)
            elif char == ")":
                while op_stack[-1] != "(":
                    operators[op_stack.pop()](
                        current_val, evaluate(start + 1)[1:-1])
                op_stack.pop()
            elif char in operators:
                while len(op_stack) > 0 and op_stack[-1] in operators:
                    current_val = operators[op_stack.pop()](current_val, 
                                                              expression[start])
                op_stack.append(char)
            else:
                if current_val is None:
                    current_val = evaluate(start + 1)[1:-1]
        return current_val

    return evaluate()