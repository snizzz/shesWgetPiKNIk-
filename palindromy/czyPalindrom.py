import sys
def czyPalindrom(wej):
    b = str(wej).lower().replace(" ","")
    while b.count(" ") > 0:
        b.remove(" ")
    global len
    len = len(b)
    if len % 2 == 0:
        for x in range (1, len+1):
            c = 0
            c = len - x
            if b[c] != b[x-1]:
                return False
    else:
        for x in range (1, len+1):
            c = 0
            c = len - x
            if b[x-1] != b[c]:
                return False
    return True
#print(czyPalindrom(sys.argv[1]))
