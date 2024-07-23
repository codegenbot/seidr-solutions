```
def solve_boolean(expression):
    operators = {"&": lambda x, y: x and y, "|": lambda x, y: x or y}
    def evaluate(s, start=0, end=-1):
        if end == -1:
            end = len(s)
        stack = []
        operator = None
        for i in range(start, end):
            if s[i] in {"&", "|"}:
                operator = s[i]
            elif s[i] in {"T", "F"}:
                while stack and stack[-1] != "T" and stack[-1] != "F":
                    stack.pop()
                if not stack:
                    return "E"
                stack.pop()
                if operator:
                    stack.append(operators[operator](stack.pop(), s[i] == "T"))
                    operator = None
        if operator or stack:
            return "E"
        return all(stack)

    return evaluate(expression)