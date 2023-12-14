
import time
list = []
for i in range(255):
    list.append(chr(i))

def slow_search(word):
    found_letters = ""
    for letter in word:
        found = False
        for char in list:
            if char == letter:
                found = True
                time.sleep(0.2)
                found_letters += char
                print(found_letters)
                break
        if not found:
            print("Letter not found:", letter)

word = "hello world"
slow_search(word)
