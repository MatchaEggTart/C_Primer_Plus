line = input('line: ')
repeat1 = 0
repeat2 = 0
k = 0
set1 = []
for i in range(0,len(line)-1):
    if line[i] == line[i+1]:
        repeat1 += 1
        print ('wer',repeat1)
        if len(line) <= 2 and repeat1 == 1:
            repeat2 = repeat1
    else:
        if repeat2 < repeat1:
            repeat2 = repeat1
            print ('asd',repeat2)
        repeat1 = 0

print('longets repeat letter',repeat2+1)
