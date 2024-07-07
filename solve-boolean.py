import re
def solve_boolean(expression):
# Check if the expression is a single character (e.g. 't' or 'f')
if len(expression) == 1 and expression[0] in ('t', 'f'):
    return expression[0] == 't'
# Search for all occurrences of the pattern in the string
matches = re.findall(r"([tf]\s*[|&]\s*[tf])", expression)
# Evaluate each match using a recursive function
return any(evaluate_match(match, 0) for match in matches)
def evaluate_match(match, index):
left, right = match[index:index+2]
if left == 't' and right == 'f':
    return True
elif left == 'f' and right == 't':
    return False
else:
    # Recursively evaluate the rest of the expression
    return solve_boolean(match[index+2:])