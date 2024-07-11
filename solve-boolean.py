def solve_boolean(expression):
    while "|" in expression:
        start = expression.index("|")
        end = start + 1
        for char in expression[end:]:
            if char == "|":
                break
            end += 1
        left = expression[:start]
        right = expression[end:]
        if left == "T" and right == "T":
            expression = "T"
        elif left == "F" or right == "F":
            expression = "F"
        else:
            expression = "T"
    while "&" in expression:
        start = expression.index("&")
        end = start + 1
        for char in expression[end:]:
            if char == "&":
                break
            end += 1
        left = expression[:start]
        right = expression[end:]
        if left == "F" and right == "F":
            expression = "F"
        elif left == "T" or right == "T":
            expression = "T"
        else:
            expression = "F"
    return expression