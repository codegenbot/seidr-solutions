def solve_boolean(expression):
    return eval(expression
                .replace("T", "True(")
                .replace("F", "False(")
                .replace("True(", "True)")
                .replace("False(", "False)")
                .replace("&", " and ")
                .replace("|", " or ")
               )