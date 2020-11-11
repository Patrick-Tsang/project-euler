with open("p022_names.txt", "r") as text:
    names = text.read().replace("\"", "").split(",")

names.sort()

sum = 0
print("length = " + str(len(names)))

for i in range(len(names)):
    temp = 0
    print(names[i])

    for n in names[i]:
        temp += ord(n) - 64

    sum += temp * (i+1)

print(sum)