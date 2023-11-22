# Static Keyword

Keyword-ul *static* are semnificații diferite când este folosit cu diferite tipuri. Putem utiliza keyword-ul *static* în următoarele contexte:

* Variabile statice: 
* Membrii statici ai unei clase

### Variabile statice
* Variabile statice într-o funcție:
  
   Atunci când o variabilă este declarată ca fiind statică, spațiul pentru aceasta este alocat pe toată durata de viață a programului. Chiar dacă funcția este apelată de mai multe ori, spațiul pentru variabila statică este alocat doar o singură dată, iar valoarea variabilei în apelul anterior este păstrată în apelul următor al funcției. Aceasta este utilă pentru implementarea corutinelor în limbajele C/C++ sau în orice altă aplicație în care starea anterioară a unei funcții trebuie să fie stocată. ( [exemplu](variabila_statica.cpp) )
* Variabile statice într-o clasă:
  
   Deoarece variabilele declarate ca statice sunt inițializate doar o dată, deoarece li se alocă spațiu într-un depozit static separat, variabilele statice dintr-o clasă sunt partajate de obiecte. Nu pot exista mai multe copii ale acelorași variabile statice pentru diferite obiecte. De asemenea, din acest motiv, variabilele statice nu pot fi inițializate folosind constructori. ( [exemplu](variabila_statica_clasa.cpp) )


* Membrii statici ai unei clase:

    La fel, cand un obiect este definit prin *static* atunci va avea un efect asupra lui pe intreaga durata de viata a programului. ( [exemplu](statica_membru_clasa.cpp) )

* Functii statice intr-o clasa:

     La fel ca și membrii de date statici sau variabilele statice din interiorul clasei, funcțiile membre statice nu depind de obiectul clasei. Avem voie să apelăm o funcție membră statică folosind obiectul și operatorul „.”, dar se recomandă să apelăm membrii statici folosind numele clasei și operatorul de rezoluție de scop. **Funcțiile membre statice au permisiunea de a accesa doar membrii de date statici sau alte funcții membre statice; nu pot accesa membrii de date sau funcții membre non-statice ale clasei.**


# Bibliografie


[GeeksForGeeks](https://www.geeksforgeeks.org/static-keyword-cpp/)
