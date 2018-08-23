line = input('line: ')
repeat1 = repeat2 = 1
for i in range(0,len(line)-1):
    if line[i] == line[i+1]:
        repeat1 +=1
    else:
        if repeat1 >= repeat2:
            repeat2 = repeat1
        repeat1 = 1

print('longets repeat letter',repeat1 if repeat1 > repeat2 else repeat2)
