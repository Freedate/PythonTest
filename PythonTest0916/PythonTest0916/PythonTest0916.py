import pickle

fileName = "파일입출력예제2.txt"
#with open(fileName, 'w+') as myFile:               #파일을 읽고 쓸수있게 불러옴
#   myFile.write("Hello World!\n")                  #파일을 씀
#   myFile.write("201111305 이동호\n")
fileName2 = "Freeday.txt"
fileName3 = "파일입출력예제2.txt"

rlist = []
with open(fileName, 'r') as myFile, open(fileName2, 'wb+') as monica:
#    content = myFile.read();
#    print(content)
#    while True:
#        content = myFile.readline()
#        if not content : break
#        print(content)

#    for content in myFile:
#       (role, script) = content.strip().split(":")   #strip : 공백을 지움, split : 콜론을 기준으로 자름
#       print(role)

#     for content in myFile:
#         (role, script) = content.strip().split(":",1)
#         if role=="Monica":
#             myFile2.write(script)
#             myFile2.write("\n")
#         if not content : break
    for content in myFile:
        (role, script) = content.strip().split(":",1)
        rlist.append(role)
        if not content : break

    pickle.dump(rlist, monica)
    #rlist = set(rlist)                  #리스트 중복제거
    #print(rlist)
with open(fileName2, "rb") as monica:
    result = pickle.load(monica)
    print(result)

