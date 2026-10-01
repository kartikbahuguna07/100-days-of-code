s = input("Enter first string: ")
t = input("Enter second string: ")

if sorted(s) == sorted(t):
    print("Anagram")
else:
    print("Not Anagram")