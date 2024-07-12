hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melting_rate = float(input())

snow_on_ground_after_hours = snow_on_ground

for i in range(hours):
    snow_on_ground_after_hours += snow_fall_rate
    snow_on_ground_after_hours *= (1 - snow_melting_rate)

print(snow_on_ground_after_hours)