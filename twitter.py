```
f"Your tweet has {len(re.sub(r'\W+', '', tweet).encode().decode())} characters"