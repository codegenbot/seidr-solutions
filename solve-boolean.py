def solve_boolean(expression):
    return eval(expression
                .replace("True", "True(")
                .replace("False", "False(")
                .replace("T", "True")
                .replace("F", "False")
                .replace("&", " and ")
                .replace("|", " or ")
               )