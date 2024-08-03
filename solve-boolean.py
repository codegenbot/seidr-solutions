def solve_boolean(input_string):
    def boolean_evaluation(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif '&' in expression:
            left, right = expression.split('&')
            return boolean_evaluation(left) and boolean_evaluation(right)
        elif '|' in expression:
            left, right = expression.split('|')
            return boolean_evaluation(left) or boolean_evaluation(right)

    return boolean_evaluation(input_string)