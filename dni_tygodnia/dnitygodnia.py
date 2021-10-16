import sys

wejscie = input()
podzielone = wejscie.split()
dzien = podzielone[0]
dodac = int(podzielone[1])
dzienliczba = 0

if dzien == "poniedziałek":
    dzienliczba = 0
elif dzien == "wtorek":
    dzienliczba = 1
elif dzien == "środa":
    dzienliczba = 2
elif dzien == "czwartek":
    dzienliczba = 3
elif dzien == "piątek":
    dzienliczba = 4
elif dzien == "sobota":
    dzienliczba = 5
elif dzien == "niedziela":
    dzienliczba = 6
else:
    print("Podaj poprawny dzień albo liczbę!")
    sys.exit()

dzienliczba += dodac
dzienliczba = dzienliczba % 7

if dzienliczba == 0:
    print("Poniedziałek")
elif dzienliczba == 1:
    print("Wtorek")
elif dzienliczba == 2:
    print("Środa")
elif dzienliczba == 3:
    print("Czwartek")
elif dzienliczba == 4:
    print("Piątek")
elif dzienliczba == 5:
    print("Sobota")
elif dzienliczba == 6:
    print("Niedziela")
