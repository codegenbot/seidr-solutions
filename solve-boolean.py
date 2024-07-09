def solve_boolean(expression):
    if "(" in expression:
        end = expression.index(")")
        return solve_boolean("(" + expression[:end+1])

    if "&" in expression:
        left, right = expression.split("&")
        result = eval(left)
        if not result: 
            return False
        return solve_boolean(right)

    if "|" in expression:
        left, right = expression.split("|")
        result = eval(left)
        if result: 
            return True
        return solve_boolean(right)

    if "T" in expression or "F" in expression:
        result = ""
        for char in expression:
            if char == "T":
                result += "True"
            elif char == "F":
                result += "False"
            else:
                result += char
        return eval(result)