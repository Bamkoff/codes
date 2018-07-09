USE ksiegarnia_internetowa;

SELECT MAX(cena) - MIN(cena) AS Ruznica_MAX_i_MIN
FROM Ksiazki;