t = int(input())
while t:
    x = int(input())
    tem = x
    sum = 0
    while tem != 0:
        rem = tem % 10
        sum = (sum * 10) + rem
        tem = tem // 10
    if sum == x:
        print("wins")
    elif sum != x:
        print("loses")
    t -= 1
