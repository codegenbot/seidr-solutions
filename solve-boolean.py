def solve_boolean(expression):
    stack = []
    result = ""
    for char in expression:
        if char == "(":
            stack.append(char)
        elif char == ")":
            while len(stack) > 0 and stack[-1] != "(":
                operator = stack.pop()
                if operator in ["|", "&"]:
                    result = str(evaluate_expression(result + operator))
            if stack and stack[-1] == "(":
                stack.pop()
        elif char in ["|", "&"]:
            while len(stack) > 0 and stack[-1] in ["|", "&"]:
                stack.pop()
            stack.append(char)
        else:
            result += str(char)

    return "True" if evaluate_expression(result) == "True" else "False"


def evaluate_expression(expression):
    if not expression or expression[0] in ["(", "|", "&"]:
        return expression

    i = 0
    while i < len(expression) and expression[i].isdigit():
        i += 1

    if expression[i].upper() == "T":
        result = "True"
    else:
        result = "False"

    j = i + 1
    while j < len(expression) and expression[j] in ["|", "&"]:
        j += 1
    return eval(f"{result} {expression[i]} {''.join(expression[i+1:j])}")