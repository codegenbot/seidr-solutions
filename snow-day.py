from decimal import Decimal

def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = Decimal(str(snow_on_ground))
    snow_fall_rate = Decimal(str(snow_fall_rate))
    snow_melt_rate = Decimal(str(snow_melt_rate))

    for _ in range(hours):
        melt_amount = snow * snow_melt_rate
        snow += snow_fall_rate - melt_amount
        snow = max(snow, Decimal('0'))

    return float(snow)