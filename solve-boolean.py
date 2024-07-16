def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    else:
        while "&" in expression or "|" in expression:
            expression = expression.replace(" & ", "&")
            expression = expression.replace("|", "| |")
        return eval("(&)&(|(not )?T|(?T))".replace("?T", lambda x: " not T" if x == "F" else "" ).replace("T", "True").replace("F", "False").replace("not ", "not ").replace("|", "|").replace("&", "&") % expression)