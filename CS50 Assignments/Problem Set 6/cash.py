def get_change(amount):
  
  coins = [25, 10, 5, 1]  
  num_coins = 0

  for coin in coins:
    while amount >= coin:
      amount = amount - coin
      num_coins = num_coins + 1
      print(f"{coin}:",num_coins)
  

while True:
    change_owed = int(input("Change owed: "))
    if change_owed >= 0:
      break
    else:
      print("Change cannot be owed")

print(get_change(change_owed))