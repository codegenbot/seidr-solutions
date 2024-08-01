def snow_day(hours, snow, rate, melt):
    return (snow + rate * hours - melt * hours) if melt != 1 else snow + rate * hours