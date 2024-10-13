def checksum(data):
    if len(data)%2!=0:
        data+=b'\0'
    sum_to=0
    for i in range (0,len(data),2):
        word = (data[i]<<8)+data[i+1]
        sum_to+=word
    while sum_to>>16:
        sum_to= (sum_to & 0xFFFF)+(sum_to>>16)
    checksum = ~sum_to & 0xFFFF
    return checksum

data=b'fuckinhell'
che=checksum(data)
print(hex(che))
