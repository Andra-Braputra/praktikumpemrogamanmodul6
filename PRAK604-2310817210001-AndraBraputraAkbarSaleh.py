import sys
def decode_message(code, message):
    decoded_message = ""
    star_count = 0
    hash_count = 0

    for i in range(len(code)):
        if code[i] == " ":
            decoded_message += " "
        elif code[i] == message[i]:
            decoded_message += "*"
            star_count += 1
        else:
            decoded_message += "#"
            hash_count += 1

    return decoded_message, star_count, hash_count

def check_message_authenticity(decoded_message, star_count, hash_count):
    if star_count >= hash_count:
        return "Pesan asli"
    else:
        return "Pesan palsu"

code = input()
received_message = input()

if len(code) != len(received_message):
     print("Panjang kalimat berbeda, pesan palsu")
     sys.exit()

decoded_message, star_count, hash_count = decode_message(code, received_message)

print(decoded_message)
print("* = ", star_count)
print("# = ", hash_count)
print(check_message_authenticity(decoded_message, star_count, hash_count))
