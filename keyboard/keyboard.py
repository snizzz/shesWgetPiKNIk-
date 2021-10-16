import keyboard
import winsound


dopasowanie ={
    'a': 'dzwiek1.wav',
    'backspace': 'dzwiek123.wav',
    'tab': 'dzwiek5.wav',
    'caps lock': 'dzwiek7.wav',
    'shift': 'dzwiek9.wav',
    'ctrl': 'dzwiek11.wav',
    'space': 'dzwiek13.wav',
    'z': 'dzwiek15.wav',
    'x': 'dzwiek17.wav',
    'c': 'dzwiek22.wav',
    'v': 'dzwiek23.wav',
    'b': 'dzwiek25.wav',
    'n': 'dzwiek29.wav',
    'm': 'dzwiek31.wav',
    ',': 'dzwiek33.wav',
    '.': 'dzwiek35.wav',
    '/': 'dzwiek141.wav',
    'right shift': 'dzwiek39.wav',
    'right ctrl': 'dzwiek41.wav',
    'enter': 'dzwiek165.wav',
    '\\': 'dzwiek45.wav',
    ']': 'dzwiek49.wav',
    '[': 'dzwiek51.wav',
    'p': 'dzwiek53.wav',
    'o': 'dzwiek56.wav',
    'i': 'dzwiek58.wav',
    'u': 'dzwiek59.wav',
    'y': 'dzwiek61.wav',
    't': 'dzwiek64.wav',
    'r': 'dzwiek65.wav',
    'e': 'dzwiek67.wav',
    'w': 'dzwiek69.wav',
    'q': 'dzwiek71.wav',
    'a': 'dzwiek168.wav',
    's': 'dzwiek170.wav',
    'd': 'dzwiek172.wav',
    'f': 'dzwiek174.wav',
    'g': 'dzwiek175.wav',
    'h': 'dzwiek83.wav',
    'j': 'dzwiek85.wav',
    'k': 'dzwiek87.wav',
    'l': 'dzwiek90.wav',
    ';': 'dzwiek92.wav',
    "'": 'dzwiek93.wav',
    '`': 'dzwiek98.wav',
    '1': 'dzwiek100.wav',
    '2': 'dzwiek148.wav',
    '3': 'dzwiek157.wav',
    '4': 'dzwiek105.wav',
    '5': 'dzwiek145.wav',
    '6': 'dzwiek155.wav',
    '7': 'dzwiek112.wav',
    '8': 'dzwiek143.wav',
    '9': 'dzwiek153.wav',
    '0': 'dzwiek149.wav',
    '-': 'dzwiek162.wav',
    '=': 'dzwiek121.wav',
    'num lock': 'dzwiek139.wav',
    'home': 'dzwiek127.wav',
    'left': 'dzwiek137.wav',
    'end': 'dzwiek131.wav',
    'up': 'dzwiek133.wav',
    'down': 'dzwiek135.wav',
    '*': 'dzwiek151.wav',
    'decimal': 'dzwiek159.wav',
    '+': 'dzwiek164.wav',
    'esc': 'dzwiek176.wav'}
print("Zeby przestać czekać na input kliknij klawisz ESC")
while True:
    klawisz = keyboard.read_key().lower()
    if klawisz =="esc":
        break
    if klawisz not in dopasowanie.keys():
        print("Klawisz " + klawisz +" nalezy do funkcyjnych,ich nie trzeba bylo obslugiwac")
    else:
        winsound.PlaySound(dopasowanie[klawisz], winsound.SND_ASYNC)
exit()
