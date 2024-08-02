hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melting_proportion = float(input())

remaining_snow = snow_on_ground
for _ in range(hours):
    remaining_snow = remaining_snow + snow_fall_rate - (remaining_snow * snow_melting_proportion)

print(remaining_snow)