USE Biblioteka;

SELECT Tytul,nazwisko
FROM ksiazki INNER JOIN autorzy ON ksiazki.AutorID = autorzy.IDAutor;