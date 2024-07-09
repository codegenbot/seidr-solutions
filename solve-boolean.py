def solve_boolean(expression):
    if "&" not in expression:
        if "|" not in expression:
            return expression == "T"
        else:
            parts = expression.split("|")
            return eval(f"{parts[0]} or {parts[1]}")
    else:
        parts = expression.split("&")
        result = True
        for part in parts:
            if "|" in part:
                sub_parts = part.split("|")
                result = result and (eval(f"{sub_parts[0]} or {sub_parts[1]}"))
            elif part != "T":
                return False
        return result