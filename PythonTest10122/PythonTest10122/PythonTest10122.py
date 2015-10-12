#import glob
#import os

#print(glob.glob(os.path.abspath('c:\\python34/'+'*.exe')))

#ndir = nfile = 0
#def traverse(dir, depth):
#    global ndir, nfile
#    for obj in glob.glob(dir+'/*'):
#        if depth ==0:
#            prefix = '|--'
#        else:
#            prefix = '|'+' '*depth+'|--'
#        if os.path.isdir(obj):
#            ndir += 1
#            print(prefix+os.path.basename(obj))
#            traverse(obj, depth+1)
#        elif os.path.isfile(obj):
#            nfile +=1
#            print(prefix+os.path.basename(obj))
#        else:
#            print(prefix+'unknown object:', obj)

#if __name__ == '__main__':  # 모듈 테스트에서만 실행
#    traverse('..',0)
#    print('\n', ndir, 'directories,',nfile,'files')



#import tempfile
#with tempfile.TemporaryFile('w+') as fp:
#    fp.write('Hello World!')
#    print(fp.name)
#    print(os.path.exists(fp.name))
#    fp.seek(0)
#    data = fp.read()
#    print(data)

#print(os.path.exists(fp.name))

#import time
#print(time.time()) #1970년 1월 1일부터 누적된 초
#print(time.ctime(100)) #입력된 초를 스트링 객체로 반환
#print(time.gmtime())         #struct_time 객체로 반환. 인자가 없으므로 현재 시간을 반환(GMT)
#print(time.localtime())      #struct_time 객체로 반환. 인자가 없으므로 현재 시간을 반환(LST)


#t = time.strftime('%Y,%B,%d, %A, %H : %M  ', time.localtime())
#print(t)


#import calendar

#calendar.calendar(2000)

#print(calendar.weekday(1993, 1, 26))


import random

#print(random.randint(1,100))


#randomlist = random.sample(range(100),5)
#randomlist.sort()
#print(randomlist)

#randomlist = random.sample(range(100),10)       #100까지의 난수중 10개 추출
#print(randomlist)       
#random.shuffle(randomlist)                      #리스트를 셔플함
#print(randomlist)
#print(random.choice(randomlist))                #셔플한 리스트 중 임의 값 추출

#data = [('Red', 3), ('Blue', 1), ('Green', 4), ('Yellow', 2)]
#datalist = []
##for val, cnt in data:
##    for i in range(cnt):
##        datalist.append(val)           #이중 for문을 아래의 구문으로 대체가능(같은 기능)
#datalist = [val for val, cnt in data for i in range(cnt)]
       

#print(datalist)
#random.shuffle(datalist)
#print(datalist)

import webbrowser
url = 'http://google.com'
webbrowser.open_new(url)
#webbrowser.open_new_tab(url)
