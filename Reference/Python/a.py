#!/usr/bin/python
import re
 
date = raw_input('word: ')
 
if re.search( "^(?=.*\d)(?=.*[a-z])(?=.*[A-Z]).*$", date):
    print(date)
else:
    print('321')
if re.search( "^.*?(\d).*?([a-z]).*?([A-Z]).*$", date):
    print(date)
else:
    print('123')
