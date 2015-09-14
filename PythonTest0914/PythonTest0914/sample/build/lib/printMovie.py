def printMovie(movie):
    for item in movie:
        print(item)

def printItem(movie, level=0):
    for item in movie:
        if isinstance(item,list):
            printItem(item, level+1)
        else:
            for i in range(level):
                print("\t",end=" ")
            print(item)    
    

