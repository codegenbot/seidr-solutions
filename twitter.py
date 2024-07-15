```
f"Your tweet has {unicodedata.normalize('NFD', tweet).encode('ascii', 'ignore').decode().count('\0')} characters"