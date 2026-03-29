# doesn't actually give the flag

import base64

string = ''

with open('based64.txt', 'r') as file:
    for line in file:
        char = line.replace("=", "")
        decoded_bytes = base64.b64decode(line)
        string += decoded_bytes.decode('utf-8')
print(string)
