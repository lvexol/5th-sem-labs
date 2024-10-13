import socket
import struct
import time

mcast_ip='224.1.1.1'
mcast_port=5007

sock=socket.socket(socket.AF_INET,socket.SOCK_DGRAM,socket.IPPROTO_UDP)
sock.setsockopt(socket.IPPROTO_IP,socket.IP_MULTICAST_TTL,1)

while True:
    msg="asdf"
    sock.sendto(msg.encode(),(mcast_ip,mcast_port))
    time.sleep(2)



