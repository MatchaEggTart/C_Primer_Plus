#!/usr/bin/python
import re
 
date = raw_input('word: ')
 
if re.search( "^(?=.*\d)(?=.*[a-z])(?=.*[A-Z]).*$", date):
    print(date)
else:
    print('123')
if re.search( "^(.*?(\d))(.*?([a-z]))(.*?(A-Z])).*$", date):
    print(date)
else:
    print('321')
if re.search( "^.*(?=\d).*$", date):
    print(date)
else:
    print('456')
if re.search( "^.*45(?=.*[a-z]).*$", date):
    print(date)
else:
    print('456')
