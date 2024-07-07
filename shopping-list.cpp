double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        prices[i] *= (1 - discounts[i]/100); // apply discount only once
        if(prices[i] < 0) prices[i] = 0;
        total += prices[i];
    }
    return total;
}