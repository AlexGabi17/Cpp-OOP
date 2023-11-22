# Virtual Keyword

O functie membru este declarata *virtuala* intr-o clasa pentru a putea fi suprascrisa intr-o clasa derivata. Aceasta abordare este folosita pentru a obtine **Runtime Polymorphism**

* Functiile virtuale sunt folosite pentru a asigura apelarea corecta a functiilor, indiferent de tip sau referinta
* Functiile sunt declarate cu keyword-ul **virtual** in clasa de baza
  
## Reguli pentru functiile Virtuale
1. Functiile virtuale nu pot fi statice.
2. O functie virtuala poate fi o functie **friend** a altei clase
3. Prototipul functiei virtuale trebuie sa fie acelasi in clasa derivata, asa cum este definit si in clasa de baza.

## How does the compiler perform runtime resolution?
* vtable - Un tabel de pointer, mentinut pentru fiecare clasa
* vptr - Un pointer catre vtable, mentinut pentru fiecare instanta a unui obiect


# Bibliografie

[CppReference](https://en.cppreference.com/w/cpp/language/virtual)

[GeeksForGeeks](https://www.geeksforgeeks.org/virtual-function-cpp/)

[GeeksForGeeks - Virtual Functions and Runtime Polymorphism in C++](https://www.geeksforgeeks.org/virtual-functions-and-runtime-polymorphism-in-cpp/)