def snow_day(hours: int, snow_on_ground: float, snow_fall_rate: float, snow_melt_rate: float) -> float:
    snow_accumulated = snow_on_ground
    for _ in range(hours):
        snow_accumulated += snow_fall_rate
        snow_accumulated -= snow_accumulated * snow_melt_rate
    return snow_accumulated

hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)