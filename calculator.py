num1 = input("Enter a number: ")
num2 = input("Enter another number: ")
operator = input("Enter a operator: ")

num1 = float(num1)
num2 = float(num2)

out = None

if operator == "+":
    out = num1 + num2
elif operator == "-":
    out = num1 - num2
elif operator == "*":
    out = num1 * num2
elif operator == "/":
    out = num1 / num2

print(str(out))
