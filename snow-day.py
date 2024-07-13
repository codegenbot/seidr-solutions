def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_proportion):
    snow = [0] * (hours + 1)
    snow[0] = snow_on_ground
    for i in range(1, hours + 1):
        snow[i] = snow[i - 1] + snow_fall_rate - (snow[i - 1] * snow_melt_proportion)
    return snow[hours]


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_proportion = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_proportion)
print(result)