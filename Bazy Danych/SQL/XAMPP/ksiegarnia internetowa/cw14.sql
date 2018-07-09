USE ksiegarnia_internetowa;

SELECT miejscowosc,COUNT(id)
FROM Pracownicy
GROUP BY miejscowosc
ORDER BY miejscowosc DESC;
