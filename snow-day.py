```
hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

total_snow = round(initial_snow, 7)
for _ in range(hours):
    total_snow += rate_of_snowfall
    total_snow -= melting_rate

print(round(total_snow, 7))