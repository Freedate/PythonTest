import re
#str = '''Window
#Unix
#Linux
#Solaris'''
#p=re.compile('^.+', re.M)       
#print(p.findall(str))
#result = p.search(str)
#print(result.group())

#m = re.match(r"(?P<first_name>\w+) (?P<last_name>\w+)", "Malcolm Reynolds")
#print(m.group('first_name', 'last_name'))
#print(m.groups())

#m = re.match(r"(\d+)\.?(\d+)?", "24")
#print(m.groups())
#print(m.groups(17))

#m  =re.match(r"(?P<first_name>\w+) (?P<last_name>\w+)", "Malcolm Reynolds")
#print(m.groupdict())

#p = re.compile(".+:")
#m = p.search("http://google.com")
#print(m.group())

#p = re.compile(".+(?=:)")
#m = p.search("http://google.com")
#print(m.group())

import os

#os.chdir("C:/")
#print(os.getcwd())
##import glob
##p = re.compile('.*[.](?!bat$|exe$).*$')

##p = re.compile("(?<=abc)def")
##m = p.search("abcdef")
##print(m.group())

#email = "tony@tiremove_thisger.net"
#m = re.search("remove_this", email)
#result = email[:m.start()]+email[m.end():]
#print(email[m.end()])
#print(result)

#def displaymatch(match):
#    if match is None:
#        return None
#    return '<Match: %r, groups=%r>' % (match.group(), match.groups())

#valid = re.compile(r"^[a2-9tjqk]{5}$")
#displaymatch(valid.match("akt5q"))
#displaymatch(valid.match("akt5e"))
#displaymatch(valid.match("akt"))
#displaymatch(valid.match("727ak"))

import urllib.request
with urllib.request.urlopen("http://www.daum.net/")as f:
    #print(f.read())
    #print(f.read(300))
    #print(f.read(300).decode("utf-8"))
    text = f.read(300).decode("utf-8")
    m = re.compile("(?<=<title>).+(?=</title>)")
    p = m.findall(text)
    print(p)
    
