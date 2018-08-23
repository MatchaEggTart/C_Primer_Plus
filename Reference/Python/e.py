#!/usr/bin/python   
for i in range(1,10):
    for j in range(i):
        j += 1
        print ("%d * %d = %-2d  " %(i, j, i*j)),
    print ("")
