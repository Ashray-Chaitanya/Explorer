val = (input("Enter a value : "))
if val == val[::-1]:
    print("Palindrome")
else:
    print("Not Palindrome")
for i in val:
    print(i,"appears", val.count(i), "times")