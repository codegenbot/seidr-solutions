def solve_boolean(expression):
    while "&| |&|" in expression:
        expression = expression.replace("&|", "&&").replace("|&", "| ")

    i = 0
    stack = []
    current_expression = ""
    open_parentheses = 0
    for char in expression + ")": 
        if char.isspace():
            if current_expression:
                stack.append(current_expression)
                current_expression = ""
        elif char == "(":
            stack.append("(")
            current_expression += char
            open_parentheses += 1
        elif char == ")":
            while True:
                if stack and (stack[-1] == "(" or not stack):
                    stack.pop()
                    current_expression += char
                    open_parentheses -= 1
                    if open_parentheses == 0:
                        break
                else:
                    stack.append(char)
                    break
        else:
            current_expression += char