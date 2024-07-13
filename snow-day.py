hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
melting_proportion = float(input())

for _ in range(hours):
    snow_on_ground += snow_fall_rate
    snow_on_ground *= (1 - melting_proportion)

print(snow_on_ground)