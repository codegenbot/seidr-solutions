def solve_boolean(expression):
    while "&| |&|" in expression:
        expression = expression.replace("&|", "&&").replace("|&", "| ")

    i = 0
    stack = []
    current_expression = ""
    for char in expression + ")": 
        if char.isspace():
            if current_expression:
                stack.append(current_expression)
                current_expression = ""
        elif char == "(":
            stack.append(current_expression)
            current_expression = ""
        elif char == ")":
            while True:
                current_expression += " " + stack.pop()
                if ")" in stack:
                    break
        else:
            current_expression += char

    return eval('bool({} {} {})'.format(*[eval(i) for i in current_expression.split()]))