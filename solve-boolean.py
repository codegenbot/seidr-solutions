```
def solve_boolean(expression):
    def evaluate(start=0):
        if start >= len(expression):  
            return None
        if expression[start] in ["T", "F"]:
            return expression[start] == "T"
        elif expression[start] == "(":
            i = 1
            while expression[i] != ")":
                i += 1
            return evaluate(i + 1)[1:-1]
        operators = {"&": lambda x, y: x and y, "|": lambda x, y: x or y}
        op = None
        if start < len(expression) and expression[start] in operators:
            op = expression[start]
            start += 1  
            left = evaluate(start)
            right_start = expression.find(")", start)
            return eval(f"({left}) {op} ({evaluate(right_start + 1)})")
        else:
            if start < len(expression):
                return evaluate()
    return str(evaluate(0))