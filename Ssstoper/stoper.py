import time
from playsound import playsound #Nie mogłem znaleźć sposobu jak wydać dźwięk bez zewnętrznej biblioteki

sciezkaDzwieku = "sciezka.mp3" #Predefiniowanie sciezki do pliku mp3 przez programistę
def zamienCzas(sek):
  minuty = sek // 60
  sek = sek % 60
  godziny = minuty // 60
  minuty = minuty % 60
  print("Stoper zmierzył czas: \n"  
        "Godziny :{0}\n"
        "Minuty :{1}\n"
        "Sekundy:{2}".format(int(godziny),int(minuty),sek))
zatrzymanyStoper = 0
statusMinutnik = 0
statusStoper= 0
wynik = 0
godziny = -1
minuty = -1
sekundy= -1
while True:
    wybor = input("Wybierz opcję\n"
                  "stoper\n"
                  "minutnik\n"
                  "exit\n")
    if wybor.lower()=="minutnik":
        if statusMinutnik==0:
            print("Wybierz jedną z opcji:\n"
              "Wlacz\n"
              "Cofnij")
            wybor = input()
            wybor = wybor.lower()
            if wybor=="wlacz":
                minutnikStart=time.time()
                minutnikKoniec = minutnikStart
                while godziny>24 or godziny<0:
                    print("Podaj ilość pełnych godzin[0-24]")
                    try:
                        godziny = int(input())
                    except:
                        print("To nie jest poprawna ilość godzin!")
                while minuty>60 or minuty<0:
                    print("Podaj ilość pełnych minut[0-60]")
                    try:
                        minuty = int(input())
                    except:
                        print("To nie jest poprawna ilość minut!")
                while sekundy>60 or sekundy<0:
                    print("Podaj ilość pełnych sekund[0-60]")
                    try:
                        sekundy = int(input())
                    except:
                        print("To nie jest poprawna ilość sekund!")
                print("Wybrałeś ilości równe: \n"
                      "Godzin :{0}\n"
                      "Minut :{1}\n"
                      "Sekund:{2}\n".format(int(godziny), int(minuty), sekundy))
                minutnikKoniec += godziny*3600+minuty*60+sekundy
                statusMinutnik=1
            elif wybor=="cofnij":
                break
            else:
                print("Nie ma takiej opcji.")
        while statusMinutnik==1:
            if time.time()>minutnikKoniec:
                playsound(sciezkaDzwieku)
                print("gram dzwiek\n")
                statusMinutnik=0
                godziny = -1
                minuty = -1
                sekundy = -1
    if wybor.lower()=="stoper":

      while True:
        if zatrzymanyStoper==1 and statusStoper==1:
          print("Wybierz opcję\n"
               "wznow\n"
               "wylacz\n"
               "cofnij\n")
        elif zatrzymanyStoper==0 and statusStoper==1:
          print("Wybierz opcję\n"
                "wylacz\n"
                "zatrzymaj\n"
                "cofnij\n")
        else:
            print("Wybierz opcję\n"
                  "wlacz\n"
                  "cofnij\n")
        wybor = input()
        wybor = wybor.lower()
        if wybor=="wlacz" and statusStoper==0:
            statusStoper=1
            poczatek = time.time()
        elif wybor=="wylacz" and statusStoper==1:
            statusStoper=0
            koniec = time.time()
            zamienCzas(wynik+koniec-poczatek)
            zatrzymanyStoper=0
            wynik=0
        elif wybor=="cofnij":
            break
        elif wybor=="zatrzymaj" and zatrzymanyStoper==0 and statusStoper==1:
            wynik+= time.time() - poczatek
            zatrzymanyStoper=1
            print(zatrzymanyStoper)
        elif wybor=="wznow" and zatrzymanyStoper==1 and statusStoper==1:
            poczatek=time.time()
            zatrzymanyStoper=0
        else:
            print("Wybrałeś niepoprawną opcję.")
    if wybor.lower()=="exit":
        exit()
