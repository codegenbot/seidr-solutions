def solve_boolean(expression):
    if not expression:
        return False

    tokens = []
    for char in expression:
        if char in ["T", "F"]:
            tokens.append(char)
        elif char == "&":
            while len(tokens) >= 2 and tokens[-1] == "|":
                tokens.pop()
                tokens.append(
                    str(eval("".join(tokens.pop()[:-1]) + " & " + tokens.pop()))
                )
            tokens.append("&")
        elif char == "|":
            while len(tokens) >= 2 and tokens[-1] in ["&", "|"]:
                tokens.pop()
                tokens.append(
                    str(eval("".join(tokens.pop()[:-1]) + " | " + tokens.pop()))
                )
            tokens.append("|")
    return "T" if tokens[0] == "T" else "F"