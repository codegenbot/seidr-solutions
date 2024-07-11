hours = int(input())
snow_ground = float(input())
snow_fall_rate = float(input())
snow_melting_rate = float(input())

total_snow_on_ground = snow_ground

for hour in range(hours):
    total_snow_on_ground += snow_fall_rate
    total_snow_on_ground *= 1 - snow_melting_rate

print(total_snow_on_ground)