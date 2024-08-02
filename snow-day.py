hours = int(input())
snow_on_ground = float(input())
rate_of_snow_fall = float(input())
proportion_of_melting = float(input())

snow_after_hours = snow_on_ground

for _ in range(hours):
    snow_after_hours += rate_of_snow_fall - proportion_of_melting * snow_after_hours

print(snow_after_hours)