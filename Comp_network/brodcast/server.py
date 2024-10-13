import socket

sock=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
sock.setsockopt(socket.SOL_SOCKET,socket.SO_BROADCAST,1)
add=('localhost',9999)

msg="fuck u"
sock.sendto(msg.encode(),add)


