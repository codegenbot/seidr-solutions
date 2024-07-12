def solve_boolean(expression):
    return eval(expression
                .replace("t", "T")
                .replace("f", "F")
                .replace("&", " and ")
                .replace("|", " or ")
               )