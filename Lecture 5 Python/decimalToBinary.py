# Decimal To Binary 
# DecNum = int(input("Enter a Decimal Number: "))
# pow = 1
# ans = 0
# while DecNum > 0:
#     remainder = DecNum % 2
#     DecNum = DecNum // 2
#     ans += (remainder * pow)
#     pow *= 10
# print(f"Binary Number of {DecNum} is: ", ans)


# Binary To Decimal
# binNum = int(input("Enter a Binary Number: "))
# pow = 1
# ans = 0
# while(binNum > 0):
#     remainder = binNum % 10
#     ans += remainder * pow
#     binNum //= 10
#     pow *= 2
# print(f"Binary of {binNum} is: ", ans)

# # ✅ Decimal to Binary Conversion
# DecNum = int(input("Enter a Decimal Number: "))
# power = 1
# binary = 0
# original = DecNum  # Save for output

# while DecNum > 0:
#     remainder = DecNum % 2
#     DecNum //= 2
#     binary += remainder * power
#     power *= 10

# print(f"Binary of {original} is: {binary}")

# ✅ Binary to Decimal Conversion
binNum = int(input("Enter a Binary Number: "))
power = 1
decimal = 0
original = binNum  # Save for output

while binNum > 0:
    remainder = binNum % 10
    decimal += remainder * power
    binNum //= 10
    power *= 2

print(f"Decimal of {original} is: {decimal}")
