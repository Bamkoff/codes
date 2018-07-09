USE Biblioteka;

SELECT IDEgzemplarz,tytul
FROM egzemplarze INNER JOIN ksiazki ON egzemplarze.KsiazkaID = ksiazki.IDKsiazki
WHERE DoWypozyczenia = 0;