#import re

#import urllib.request
#with urllib.request.urlopen("http://www.daum.net/")as f:
#    #print(f.read())
#    #print(f.read(300))
#    #print(f.read(300).decode("utf-8"))
#    text = f.read(300).decode("utf-8")
#    m = re.compile("(?<=<title>).+(?=</title>)")
#    p = m.findall(text)
#    print(p)
    

from bs4 import BeautifulSoup

#html_doc= """
#<html><head><title>The Dormouse's story</title></head>
#<body>
#<p class="title"><b>The Dormouse's story</b></p>
#<p class="story">Once upon a time there were three little sisters; and their names were
#<a href="http://example.com/elsie" class="sister" id="link1">Elsie</a>,
#<a href="http://example.com/lacie" class="sister" id="link2">Lacie</a> and
#<a href="http://example.com/tillie" class="sister" id="link3">Tillie</a>;
#and they lived at the bottom of a well.</p>
#<p class="story">...</p>
#"""
#soup = BeautifulSoup(html_doc, "html.parser")
#print(soup.prettify())
#print(soup.title)
#print(soup.title.string)
#print(soup.p)
#print(soup('p'))
#print(soup.p['class'])
#print(soup('a'))
#print(soup('a')[0])
#print(soup('p',{'class':'story'})[1].contents)
#print(soup.find_all(id='link3'))
#print(soup.find_all(class_='title'))
#print(soup.find('p')['class'])

from urllib.request import urlopen
from urllib.parse import urljoin
#url = "http://comic.naver.com/webtoon/list.nhn?titleId=644180"

#data = urlopen(url)
#soup = BeautifulSoup(data, 'html.parser')

#print(soup.td)
#cartoons = soup.find_all('td',{'class':'title'})
#for i in range(len(cartoons)):
#    title = cartoons[i].find('a').string
#    ref = cartoons[i].find('a')['href']
#    tempurl = urljoin(url,ref)
#    print(title, " ", tempurl)


import webbrowser
import sys
#webbrowser.open_new(tempurl)

class crawler:
    def crawl(self, pages, depth=2):
        for i in range(depth):
            newpage = set()
            for page in pages:
                try:
                    c = urlopen(page)
                except:
                    
                    print("Could not open %s" % page)
                    continue
                soup = BeautifulSoup(c.read(), from_encoding="utf-8")
                print('Found %s' %page)
            links = soup('a')
            for link in links:
                if('href' in dict(link.attrs)):
                    url = urljoin(page, link['href'])
                    if url.find("'")!=-1 : continue
                    url = url.split("#")[0]
                    if url[0:4]=='http':
                        newpage.add(url)
            pages = newpage

pagelist = ['http://www.daum.net/']
crawler1=crawler()
crawler1.crawl(pagelist)