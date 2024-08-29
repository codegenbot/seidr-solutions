def solve(input_str):
    def or_(a, b):
        return a or b

    def and_(a, b):
        return a and b

    bool_values = {"T": True, "F": False}

    def parse_bool(bool_str):
        if bool_str in bool_values:
            return bool_values[bool_str]
        for i in range(len(bool_str) - 1):
            if bool_str[i] in ["|", "&"]:
                return or_(
                    parse_bool(bool_str[:i]),
                    and_(
                        parse_bool(bool_str[i + 1 :]),
                        parse_bool("T" if bool_str[i + 2 :] == "T" else "F"),
                    ),
                )

    return parse_bool(input_str)