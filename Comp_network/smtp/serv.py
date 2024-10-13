import socket

# SMTP server details
server = "smtp.gmail.com"  # Replace with the actual SMTP server
port = 25

# Sender and recipient email addresses
from_email = "sender@example.com"
to_email = "recipient@example.com"

# Email message content
subject = "Hello from SMTP Client"
body = "This is a test email from the SMTP client."

# Format the email message
message = f"From: {from_email}\r\nTo: {to_email}\r\nSubject: {subject}\r\n\r\n{body}\r\n.\r\n"

# Create a TCP socket
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Connect to the SMTP server
client_socket.connect((server, port))

# Receive the server's welcome message
welcome_msg = client_socket.recv(1024)
print(welcome_msg.decode())

# Send the HELO command
client_socket.sendall(b"HELO example.com\r\n")
response = client_socket.recv(1024)
print(response.decode())

# Send the MAIL FROM command
client_socket.sendall(f"MAIL FROM: <{from_email}>\r\n".encode())
response = client_socket.recv(1024)
print(response.decode())

# Send the RCPT TO command
client_socket.sendall(f"RCPT TO: <{to_email}>\r\n".encode())
response = client_socket.recv(1024)
print(response.decode())

# Send the DATA command to start email data
client_socket.sendall(b"DATA\r\n")
response = client_socket.recv(1024)
print(response.decode())

# Send the email message
client_socket.sendall(message.encode())

# Send the QUIT command to close the connection
client_socket.sendall(b"QUIT\r\n")
response = client_socket.recv(1024)
print(response.decode())

# Close the socket
client_socket.close()  # Optional, good practice to close the socket
