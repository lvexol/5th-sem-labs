import socket

add=('localhost',9999)
sock=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)

msg="asdf"

sock.sendto(msg.encode(),add)

data=sock.recvfrom(1024)
print(data)

sock.close()
