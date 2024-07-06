def solve_boolean(expression):
    bool_map = {"T": True, "F": False}
    expression = "".join(bool_map.get(c, c) for c in expression)

    while "&" in expression:
        start = 0
        end = 0
        for i in range(len(expression) - 1, -1, -1):
            if expression[i] == "&":
                start = i
            elif expression[i] == "|":
                end = i
                break
        and_parts = expression[: end + 1].split("&")
        expression = expression[start + 1 :]

        for part in and_parts:
            while "|" in part:
                or_parts = part.split("|")
                part = "F" if all(bool_map[p] == False for p in or_parts) else "T"

            expression = part.replace("|", "&")

    return bool_map.get(expression, False)