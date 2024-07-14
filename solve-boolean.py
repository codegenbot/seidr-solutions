````
def solve_boolean(expression):
    def simplify_expression(expression):
        if '|' in expression:
            left, right = expression.split('|')
            left = simplify_expression(left)
            right = simplify_expression(right)
            return f"{left} | {right}" if left != 'True' and right != 'False' else ('True' if left == 'True' or right == 'True' else 'False')

        if '&' in expression:
            left, right = expression.split('&')
            left = simplify_expression(left)
            right = simplify_expression(right)
            return f"{left} & {right}" if left != 'True' and right != 'False' else ('True' if left == 'True' or right == 'True' else 'False')

        return expression

    while "&|&" in expression:
        expression = expression.replace("&|", "| |&").replace("|&", "& |").replace("T|", "True | ").replace("F|", "False | ")

    return simplify_expression(expression)