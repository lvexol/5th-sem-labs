import socket

add=('localhost',9999)
sock=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
sock.bind(add)

while True:
    data,cli_add=sock.recvfrom(1024)
    print(data.decode())
    sock.sendto(data,cli_add)
