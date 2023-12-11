import re
def evaluate_boolean(expression):
    expression = expression.lower()
    if "t" in expression and "f" not in expression:
        return True
    elif "f" in expression and "t" not in expression:
        return False
    else:
        operands = re.split("&|\\|", expression)
        result = True
        for operand in operands:
            if operand == "t":
                result &= True
            elif operand == "f":
                result &= False
        return result
