"""
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
"""


def evaluate(expression):
    """
    :param expression: string
    :return: boolean
    """
    if expression == "t":
        return True
    elif expression == "f":
        return False
    else:
        expression = expression.replace("t", "True")
        expression = expression.replace("f", "False")
        return eval(expression)


print(evaluate("t"))
print(evaluate("f"))
print(evaluate("f&f"))
print(evaluate("f&t"))
print(evaluate("t&f"))
