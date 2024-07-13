def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    final_snow = snow_on_ground
    for _ in range(hours):
        final_snow = final_snow + snow_fall_rate - (final_snow * snow_melt_rate)
    return final_snow


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)