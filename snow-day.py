hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melting_rate = float(input())

snow = snow_on_ground
for i in range(hours):
    snow += snow_fall_rate
    snow *= (1 - snow_melting_rate)

print(snow)