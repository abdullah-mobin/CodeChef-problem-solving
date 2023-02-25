t = int(input())
while t:
    x , y = map(int, input().split())
    result = abs(x-y)
    print(result)
    t -= 1
