```
char_map = {k: v for k, v in zip(cipher1.lower(), cipher2.lower())}
result = "".join([v if (k := i.lower()) in char_map else i for i, k in enumerate(message)])
return result