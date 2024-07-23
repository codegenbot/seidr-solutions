def solve_boolean(expression):
    return eval(expression.replace("& ", " & ").replace("| ", " | ").replace("|", " or ").replace("&", " and ").replace("T", "True").replace("F", "False"))