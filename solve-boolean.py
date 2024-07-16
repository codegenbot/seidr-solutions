```
def solve_boolean(expression):
    def evaluate():
        if expression[0] in ["T", "F"]:
            return expression[0] == "T"
        elif expression[0] == "(":
            i = 1
            temp = evaluate()
            while i < len(expression) and expression[i] != ")":
                i += 1
            return temp
        operator = expression[0]
        if operator in ["|", "&"]:
            left = evaluate()
            right = expression[2:] 
            if right[0] == "(":
                return "(" + str(evaluate()) + ")"
            return ("(" + str(left) + ") " + operator + " (" + str(right) + ")")

    return eval("(" + str(evaluate()) + ")")