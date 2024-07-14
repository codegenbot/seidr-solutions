def solve_boolean(expression):
    expression = expression.replace("&|", "&&").replace("|&", "| ")

    if expression == "F":
        return False
    elif expression == "T":
        return True

    parts = []
    current_part = ""
    operator = None

    for char in expression:
        if char in "&|":
            parts.append(eval(current_part))
            current_part = ""
            operator = char
        else:
            current_part += char

    parts.append(eval(current_part))

    result = True

    while len(parts) > 1:
        left = parts.pop(0)
        right = parts.pop(0)

        if operator == "&":
            result = result and (left or right)
        elif operator == "|":
            result = result or (left or right)

    return result