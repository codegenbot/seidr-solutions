def solve_boolean(expression):
    expression = expression.replace("&|", "&&").replace("|&", "| ")
    
    if expression == "F":
        return False
    elif expression == "T":
        return True
    
    if "&" in expression:
        left, right = expression.split("&")
        if eval(left) and eval(right):
            return True
        else:
            return False
    
    if "|" in expression:
        left, right = expression.split("|")
        if eval(left):
            return True
        elif eval(right):
            return True
        else:
            return False

print(solve_boolean("f|f&t|t&t|t&t&f&t&t|t&t&t&f|f"))