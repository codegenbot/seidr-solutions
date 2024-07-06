def solve_boolean(expression):
    bool_map = {"T": True, "F": False}

    def precedence(c):
        if c == "&":
            return 1
        elif c == "|":
            return 0

    def parse_and_eval(s):
        stack = []
        result = None
        for char in s:
            if char in bool_map:
                result = bool_map[char]
            elif char in ("&", "|"):
                while stack and stack[-1] in ("(", "&", "|"):
                    stack.pop()
                if stack and stack[-1] == "(":
                    stack.pop()
                stack.append(char)
            elif char == "(":
                stack.append(char)
            elif char == ")":
                while stack and stack[-1] != "(":
                    pass
                if stack and stack[-1] == "(":
                    stack.pop()
        return result

    def eval_expression(expression):
        while "&" in expression or "|" in expression:
            start = 0
            end = len(expression)
            for i in range(len(expression) - 1, -1, -1):
                if expression[i] == "&":
                    start = i
                elif expression[i] == "|":
                    end = i
                    break
            and_or_parts = expression[: end + 1].split(
                (expression[start] + "&" if start > 0 else "")
            )

            result = eval_expression(
                " & ".join(map(str, [eval_expression(part) for part in and_or_parts]))
            )
            return str(result).lower() if result else "F"
        return parse_and_eval(expression)

    return eval_expression(expression)