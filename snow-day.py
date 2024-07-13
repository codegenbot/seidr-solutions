hours, snow_on_ground, snow_fall_rate, snow_melt_rate = map(float, input().split(' '))
total_snow = snow_on_ground
for _ in range(int(hours)):
    total_snow += snow_fall_rate
    total_snow -= snow_melt_rate
    if total_snow < 0:
        total_snow = 0
print(total_snow)