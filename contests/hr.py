class Stock:
    def __init__(self, quantity, purchase_time, sell_time):
        self.quantity = quantity
        self.purchase_time = purchase_time
        self.sell_time = sell_time

n = int(input())
stocks = []
for i in range(n):
    quantity, purchase_time, sell_time = map(int, input().split())
    stocks.append(Stock(quantity, purchase_time, sell_time))

num_days = int(input())
prices = []
for i in range(n):
    prices.append(list(map(int, input().split())))

query_time = int(input())

realized_profit = 0
unrealized_profit = 0

for i in range(n):
    quantity = stocks[i].quantity
    purchase_time = stocks[i].purchase_time
    sell_time = stocks[i].sell_time

    if purchase_time <= query_time:
        current_price = prices[i][query_time - 1]
        purchase_price = prices[i][purchase_time - 1]

        if sell_time == 0 or sell_time > query_time:
            unrealized_profit += quantity * (current_price - purchase_price)
        else:
            sell_price = prices[i][sell_time - 1]
            realized_profit += quantity * (sell_price - purchase_price)

print(realized_profit, end='\n')
print(unrealized_profit, end='')
