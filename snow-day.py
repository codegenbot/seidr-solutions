hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

total_snow = initial_snow
for _ in range(hours):
    melted_snow = min((total_snow * melting_rate), total_snow)
    total_snow -= round(melted_snow, 7)
    total_snow += round(rate_of_snowfall, 7)

print("{:.7f}".format(round(total_snow, 7)))