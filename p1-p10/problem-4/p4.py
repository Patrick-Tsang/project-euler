res = 0
for i in range(999,0,-1):
    for j in range(999,0,-1):
        temp = i * j
        if res < temp:
            if str(temp) == str(temp)[::-1]:
                res = temp 
        else:
            exit
print(res) 