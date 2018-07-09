USE ksiegarnia_internetowa;

SELECT miejscowosc,COUNT(id)
FROM Pracownicy
WHERE miejscowosc='Szczecin';
