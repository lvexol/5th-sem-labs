import socket

sock=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
sock.setsockopt(socket.SOL_SOCKET,socket.SO_BROADCAST,1)
add=('',9999)

sock.bind(add)
while True:
    data,ser_add=sock.recvfrom(1024)
    print(data.decode())


