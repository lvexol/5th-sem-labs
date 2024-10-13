def checksum(data):
    if len(data)%2!=0:
        data += b'\0'
    su=0
    for i in range (0,len(data),2):
        word = (data[i]<<8)+data[i+1]
        su+=word

    while su>>16:
        su=(su & 0xFFFF)+(su>>16)
    checksum=~su & 0xFFFF
    return checksum

data=b'fuck'
c=checksum(data)
print(c)
