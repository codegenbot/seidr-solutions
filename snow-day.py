hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

total_snow = initial_snow
for _ in range(hours):
    total_snow += rate_of_snowfall / 100  # Convert to cm and then add
    total_snow -= melting_rate

print(round(total_snow, 7))