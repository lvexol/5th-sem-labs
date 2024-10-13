import socket

add=('localhost',9999)
sock=socket.socket(socket.AF_INET,socket.SOCK_STREAM)

sock.connect(add)

msg="senders msg"
sock.sendall(msg.encode())
data=sock.recv(1024)
print(data.decode())
