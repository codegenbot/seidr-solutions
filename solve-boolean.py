def solve_boolean(expression):
    while "&|&" in expression:
        expression = (
            expression.replace("&|", "| |&")
            .replace("|&", "& |")
            .replace("T|", "True | ")
            .replace("F|", "False | ")
        )

    if "|" in expression:
        left, right = expression.split("|")
        return "True" if (left == "True" and right == "any") or (left == "any" and right == "True") else (
            "False" if (left == "False" and right == "False") else "any"
        )

    elif "&" in expression:
        left, right = expression.split("&")
        return "True" if (left == "True" and right == "True") else "False"

    else:
        return expression