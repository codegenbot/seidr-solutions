def snow_day(hours, amount, rate, melt_rate):
    return (amount + rate * hours) - ((melt_rate**hours) * amount)