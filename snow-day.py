hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melting_rate = float(input())

melting_rate_per_hour = snow_melting_rate / hours

for i in range(hours):
    snow_on_ground += snow_fall_rate
    snow_on_ground -= (snow_on_ground * melting_rate_per_hour)

print(snow_on_ground)