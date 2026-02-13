Acesta este un simplu program C in care copiaza continutul unui fisier in alt fisier.
Se bazeaza pe linii de argument C .



Este de forma: ./copyfile fisier1 fisier2 


Pentru a folosii copyfile.mk fiind un fisier de tip makefile se foloseste comanda:


make -f copyfile.mk 


Pentru a sterge executabilul copyfile se foloseste:


make clear -f copyfile.mk
