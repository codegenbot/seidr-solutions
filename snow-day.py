hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

total_snow = initial_snow
for _ in range(hours):
    total_snow += rate_of_snowfall
    melted_snow = min(total_snow * melting_rate, rate_of_snowfall)  # only melt new snow
    if melted_snow > 0:
        total_snow -= melted_snow

print(round(total_snow, 7))