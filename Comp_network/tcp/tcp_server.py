import socket

add=('localhost',9999)
sock=socket.socket(socket.AF_INET,socket.SOCK_STREAM)

sock.bind(add)
sock.listen(1)

conn,cli_add=sock.accept()

while True:
    data=conn.recv(1024)
    print(data.decode())
    
    msg="asfd"
    conn.sendall(msg.encode())

