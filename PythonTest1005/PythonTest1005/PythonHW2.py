
def searchField():
        import xlsxwriter

        fileName = input("Input File Name : ")          #파일 이름 입력받기 *ex) 201401.txt

    
        rlist = []                                          # 코드를 정리할 리스트 생성

        with open(fileName, 'r') as txtFile:                #입력받은 파일을 읽기전용으로 열기

            while True :
                content = txtFile.readline()
                if not content : break
                (date, num, code, numcode, blank) = content.split("|")  #필드이름 자르기
                rlist.append(code)                                      #생성한 리스트에 코드이름 하나씩 정리
            rlist=list(set(rlist))                                      #정리된 코드 중 중복 제거하여 다시 리스트로 저장
            rlist.sort()                                                #중복제거된 리스트 알파벳순 정렬
            print(rlist)                                                #입력가능한 리스트 차례대로 출력
    
            ####################################입력가능 필드 데이터 출력##################################




            key = input("input code : ")                            #원하는 코드 입력받음
            print("Extracting %s Data... Please wait..." % key)         #로딩
            workbook = xlsxwriter.Workbook('%s.xlsx'%key)               #코드이름에 맞춰 엑셀파일 생성
            worksheet = workbook.add_worksheet()                        #엑셀파일에 워크시트 생성
            worksheet.set_column(1, 1, 15)                              #워크시트의 칼럼 크기 설정
            row = 0                                                     #초기 행, 열 인덱스
            col = 0

            txtFile.seek(0)                                             #txt파일의 오프셋을 처음으로 되돌려놓음

            for content in txtFile:
        
                (date, num, code, numcode, blank) = content.split("|")  #txt파일을 다시 스프릿함
                if code==key:                                           #입력받은 code와 일치하는 아이템일 경우
                    worksheet.write_string(row,col, date)
                    worksheet.write_string(row,col+1, num)
                    worksheet.write_string(row,col+2, code)
                    worksheet.write_string(row,col+3, numcode)
                    worksheet.write_string(row,col+4, blank)            # 워크시트의 각 행에 데이터를 입력
                    row +=1                                             
            
                if not content : break
            workbook.close()

            print("Finished Extract!")
            ####################################엑셀파일로 데이터 추출 후 저장##################################
