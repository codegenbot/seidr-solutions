def solve_boolean(expression):
    if "&" not in expression and "|" not in expression:
        return "T" if expression == "t" else "F"
    elif "&" in expression and "|" not in expression:
        parts = expression.split("&")
        for part in parts:
            if "T" not in part.strip():
                return "F"
        return "T"
    elif "&" not in expression and "|" in expression:
        parts = expression.split("|")
        for part in parts:
            if "F" not in part.strip():
                return "T"
        return "F"
    else:
        parts = expression.split("&")[0].split("|")
        bool_value = solve_boolean("".join(parts))
        if all(part.strip() == "T" for part in parts):
            return bool_value
        elif any(part.strip() == "T" for part in parts):
            if bool_value == "F":
                return "T"
            else:
                return "F"