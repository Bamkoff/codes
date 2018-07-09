USE ksiegarnia_internetowa;

SELECT stanowisko,AVG(placa)
FROM Pracownicy
GROUP BY stanowkisko;