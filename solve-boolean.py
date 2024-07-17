def solve_boolean(expression):
    def evaluate_expression(expression):
        stack = []
        expression += ")"  
        for char in expression:
            if char == "(": 
                stack.append(char)
            elif char == ")":
                while stack[-1] != "(":
                    stack.pop()
                stack.pop()  
            elif char in "|&":  
                a = stack.pop()
                b = stack.pop()
                if char == "&":
                    stack.append(a and b)
                else: 
                    stack.append(a or b)
            else:
                stack.append(char == "T")  

        return stack[0]

    return str(evaluate_expression(expression))