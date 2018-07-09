def Hamming(tekst1,tekst2):
    roznica = 0
    for i in range(max(len(tekst1),len(tekst2))):
        if i>(min(len(tekst1),len(tekst2)))-1:
            roznica=roznica+1
        elif tekst1[i]!=tekst2[i]:
            roznica=roznica+1
    return roznica

flaga = 0
najmniejsza_roznica = 0
slowo = input()
n = int(input())
if n!=0:
    tab = []
    tab2 = []
    odleglosc = 0
    flaga = 0

    for i in range(n):
        tab.append(input())
        odleglosc = Hamming(tab[i],slowo)
        if flaga==0:
                minimal = odleglosc
                flaga=1
        elif odleglosc<minimal: minimal=odleglosc
        tab2.append(odleglosc)
       
    licznik = 0
    for i in tab2:
        if i == minimal:
            print(tab[licznik])
        licznik+=1
else: print("BRAK PODPOWIEDZI")
