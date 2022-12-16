def encrypt(txt,patten):
    result = ''
    for i in txt :
        if i.isupper():
            result += chr((ord(i)+patten-65) %26+65)
        else:
            result += chr((ord(i)+patten-97) %26+65)
    return result

simpletxt = input('Enter your txt: ')
patten = int(input('Enter shift patten: '))
ciphertxt = encrypt(simpletxt,patten)
print('Encryption Result :',ciphertxt)
