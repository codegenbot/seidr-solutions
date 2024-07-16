for char in message:
    if char.isalpha():
        orig_case = char.isupper()
        result_char = mapping.get(char.lower(), char).lower() if orig_case else mapping.get(char, char).upper()
        result += result_char
    else:
        result += char