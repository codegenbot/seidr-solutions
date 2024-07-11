hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melting_prop = float(input())

snow_on_ground += snow_fall_rate
snow_on_ground -= snow_on_ground * snow_melting_prop

for _ in range(hours - 1):
    snow_on_ground += snow_fall_rate
    snow_on_ground -= snow_on_ground * snow_melting_prop

print(snow_on_ground)