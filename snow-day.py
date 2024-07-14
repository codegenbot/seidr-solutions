```
hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

total_snow = initial_snow
for _ in range(hours):
    melted_snow = total_snow * melting_rate
    total_snow -= melted_snow
    if rate_of_snowfall > 0:
        total_snow += rate_of_snowfall

print(round(total_snow, 7))