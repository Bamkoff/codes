USE ksiegarnia_internetowa;

SELECT COUNT(tytul) AS Liczba_tytulow
FROM Ksiazki
WHERE rok_wydania>2008;
