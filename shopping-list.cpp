```cpp
double total = 0.0;
vector<float> prices; 
vector<float> discounts; 

cin >> prices.size();
prices.resize(cin.nextInt());
discounts.resize(cin.nextInt());

for (int i = 0; i < prices.size(); i++) {
    total += prices[i] - (prices[i] * (discounts[i] / 100.0));
}
return total;