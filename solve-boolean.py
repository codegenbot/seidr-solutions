```
def evaluate_expression(expression):
    if "T" in expression:
        expression = expression.replace("T", "True")
    if "F" in expression:
        expression = expression.replace("F", "False")

    if "&" in expression:
        return ((evaluate_expression(expression.split("&")[0]) and 
                evaluate_expression(expression.split("&")[1])) == True)
    elif "|" in expression:
        return ((evaluate_expression(expression.split("|")[0]) or 
                evaluate_expression(expression.split("|")[1])) == True)
    else:
        if expression.lower() == "t":
            return True
        elif expression.lower() == "f":
            return False
        else:
            raise Exception("Invalid Boolean expression")