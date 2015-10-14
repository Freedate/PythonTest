import re

#pattern = re.compile('d')

#result = pattern.match('dog')


#print(result.group())


#str = '''sample1
#sample2
#sample3'''

##p = re.compile('.*^', re.S)
#p = re.compile('.*$', re.S)
#result = p.search(str)

#print(result.group())


#str=" abc 1234 xyz "
#pattern = re.compile("\s*[a-zA-Z]+\s+(\d+)+\s+([a-zA-Z]+)\s*");
#result = pattern.match(str)
#print(result.group(1))
#print(result.group(2))


#pattern = re.compile('o[gh]')

#result = pattern.fullmatch('dog')
#print(result.group())
#result = pattern.fullmatch('ogre')
#print(result.group())
#result = pattern.fullmatch('doggie',1,3)
#print(result.group())


#pattern = re.compile('\W+')
#result = pattern.split(' words, words, words.')
#print(result)

#pattern = re.compile('x*')
#result = pattern.split('axbc')
#print(result)
#result = re.sub(r'\W','','a:b:c, d.')
#print(result)

#str= '<a href="index.html">HERE</a><font size="10">'
#result = re.search(r'href="(.*)">', str)
#print(result.group(1)) #index.html">HERE</a><font size="10

#result = re.search(r'href="(.*?)">', str)
#print(result.group(1)) #index.html

str = '930126-1111111'
p = re.compile('\d{6}-\d{7}')
result = p.fullmatch(str)
if result:
    p2=re.compile('-')
    result = p2.split(str)
    print(result[0])
    print(result[1])
else:
    print('주민번호의 형태가 아닙니다')
