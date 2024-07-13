hours, snow_on_ground, snow_fall_rate, snow_melt_rate = map(float, input().split())
result = snow_on_ground + (snow_fall_rate - snow_melt_rate) * hours
print(result)