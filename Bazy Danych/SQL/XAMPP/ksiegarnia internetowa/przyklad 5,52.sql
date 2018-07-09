USE ksiegarnia_internetowa;

SELECT temat, COUNT(tytul)
FROM Ksiazki
GROUP BY temat
HAVING COUNT(tytul)>=5
ORDER BY 2 DESC;