def solve_boolean(expression):
    translation_dict = {
        "T": "True",
        "F": "False",
        "|": " or ",
        "&": " and ",
    }
    
    modified_expression = expression.translate(str.maketrans(translation_dict))

    modified_expression = modified_expression.replace(" or or", " or ").replace(
        " and and", " and "
    )

    modified_expression = modified_expression.replace("!True", "False")
    modified_expression = modified_expression.replace("!False", "True")
    modified_expression = modified_expression.replace("! (", "not (")

    return eval(modified_expression)