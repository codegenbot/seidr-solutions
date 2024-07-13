hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melting_rate = float(input())

total_snow = snow_on_ground
for i in range(hours):
    total_snow += snow_fall_rate
    total_snow *= (1 - snow_melting_rate)

print(total_snow)