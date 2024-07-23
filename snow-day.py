from decimal import Decimal

def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow_on_ground = Decimal(str(snow_on_ground))
    snow_fall_rate = Decimal(str(snow_fall_rate))
    snow_melt_rate = Decimal(str(snow_melt_rate))

    for _ in range(hours):
        snow_melted = snow_on_ground * snow_melt_rate
        snow_on_ground = snow_on_ground - snow_melted + snow_fall_rate

    return float(snow_on_ground)