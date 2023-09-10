vec = input()
arr = []
dic = {'H' : 1, 'C' : 12, 'O' : 16}
for i in vec:
    if i == '(':
        arr.append(i)
    elif i == 'H' or i == 'C' or i == 'O':
        arr.append(dic[i])
    elif i == ')':
        num = 0
        while True:
            if arr[-1] == '(':
                arr.pop()
                arr.append(num)
                break
            else:
                num += arr.pop()
    else:
        arr.append(arr.pop() * int(i))

print(sum(arr))