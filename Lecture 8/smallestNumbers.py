num = [12,5,19,-5,-50,-10]
i = 0
minimumNum = num[0]
while i < len(num):
    if num[i] < minimumNum:
        minimumNum = num[i]
    i += 1
print(minimumNum)