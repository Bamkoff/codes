USE ksiegarnia_internetowa;

SELECT COUNT(tytul), temat
FROM Ksiazki
GROUP BY temat
ORDER BY 1 DESC
LIMIT 3;