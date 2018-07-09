DROP DATABASE ksiegarnia_internetowa;/* USUWANIE CAŁEJ BAZY DANYCH */
CREATE DATABASE ksiegarnia_internetowa; /* TWORZENIE NOWEJ BAZY DANYCH */

USE ksiegarnia_internetowa; /* USTAWIENIE bazy danych do pracy na niej (jakbyś robił osobny plik ze skryptem ale chyba trzeba go też używać jak w nim tworzysz baze) */

CREATE TABLE Klient /* TWORZENIE tabeli*/
(	id_klienta int PRIMARY KEY, /* PRIMARY KEY ustawienie klucz głównego*/
	nazwisko varchar (60) NOT NULL, /* (60) oznacza maksymalną ilość znaków w polu*/
	imie varchar (40) NOT NULL, /* NOT NULL wartoś nie może być NULL*/
	kod_pocztowy varchar (6),
	miejscowosc varchar (50), /* varchar int datetime decimal to typy danych obsługiwane przez xamppa*/
	ulica varchar (50),
	nr_domu varchar (7),
	PESEL varchar (11) NOT NULL UNIQUE, /*UNIQUE - wartości nie mogą się powtarzać*/
	telefon varchar (12),
	adres_e_mail varchar (70)
);

CREATE TABLE Ksiazki
(
	id_ksiazki INT PRIMARY KEY,
	tytul varchar (100) NOT NULL UNIQUE,
	id_autora int NOT NULL,
	cena decimal, /* decimal jest dobry dla waluty bo w xamppie nie ma typu danych konkretnie dla waluty*/
	wydawnictwo varchar (20),
	temat varchar (30),
	miejsce_wydania varchar (28),
	rok_wydania varchar (4) NOT NULL DEFAULT '2012', /* DEFAULT 'wartość' to warość domyślna*/
	jezyk_ksiazki varchar (15),
	opis varchar (100)
);

CREATE TABLE Autor
(
	id_autora int AUTO_INCREMENT NOT NULL PRIMARY KEY, /* AUTO_INCEREMENT auto numerowanie*/
	nazwisko varchar (50) NOT NULL,
	imie varchar (30) NOT NULL,
	narodowosc varchar (30),
	okres_tworzenia varchar (35),
	jezyk varchar (30),
	rodzaj_tworczosci varchar (35),
	osiagniecia varchar (100)
);

CREATE TABLE Zamowienia
(
	id_zamowienia int PRIMARY KEY,
	id_klienta int NOT NULL,
	data_zlozenia_zamowienia datetime,
	data_wyslania datetime,
	koszt_wysylki decimal,
	id_faktury int
);

CREATE TABLE Faktura
(
	id_faktury int PRIMARY KEY,
	sposob_platnosci varchar (100),
	data_wydania_faktury varchar (30)
);

CREATE TABLE Rejestracja_zamowienia
(
	id_zamowienia int NOT NULL,
	id_ksiazki int NOT NULL,
	liczba_egz int NOT NULL
);

CREATE TABLE zadania
(
id_zadania INT NOT NULL,
tytul varchar (45) NULL,
data_poczatkowa DATETIME NULL,
data_koncowa DATETIME NULL,
opis varchar (200) NULL,
UNIQUE INDEX id_zadania_UNIQUE (id_zadania ASC)
);

ALTER TABLE zadania
CHANGE COLUMN id_zadania id_zadanioo INT(11) NOT NULL AUTO_INCREMENT;

ALTER TABLE zadania
ADD COLUMN zadanie_kompletne DECIMAL(2,1) NULL;

ALTER TABLE zadania
DROP COLUMN tytul;

ALTER TABLE zadania
RENAME TO praca;

INSERT INTO Ksiazki (id_ksiazki, tytul, id_autora, cena, wydawnictwo, temat) /*DODAWANNIE danych do tabeli*/
VALUES 
(1,'Aplikacje internetowe', 2, 57, 'Helion', 'Internet'),
(2,'Programowanie w PHP', 2, 72, 'Helion', 'Internet'),
(3,'SQL Server 2008', 3, 45, 'PWN', 'Bazy danych');

INSERT INTO Klient (id_klienta, nazwisko, imie, PESEL)
VALUES
(1, 'Nowak', 'Andrzej', '7802103121'),
(2, 'Kowalski', 'Jan', '810920217239'),
(3, 'Górski', 'Antoni', '89120217239'),
(4, 'Wesolowski', 'Adam', '3145512345');


UPDATE Klient SET nazwisko='Brycza' /* MDYFIKACJA danych w tabeli*/
WHERE nazwisko='Kowalski';

UPDATE Ksiazki SET wydawnictwo='Helionek'
WHERE id_autora=2;

UPDATE Klient SET imie='Adam'
WHERE imie='Jan';

UPDATE Klient SET id_klienta=11
WHERE imie='Adam' AND nazwisko='Wesolowski';

UPDATE Klient SET kod_pocztowy='34-231',miejscowosc='Warszawa',telefon='123521251'
WHERE id_klienta=1;

ALTER TABLE praca
CHANGE COLUMN opis opis varchar (200) DEFAULT'abc' NULL;

ALTER TABLE praca 
CHANGE COLUMN opis opisz varchar (200) DEFAULT'abc' NULL;

ALTER TABLE praca
CHANGE COLUMN id_zadanioo id_zadania INT(11) NOT NULL AUTO_INCREMENT PRIMARY KEY;

ALTER TABLE praca
CHANGE COLUMN id_zadania ID INT(11) NOT NULL AUTO_INCREMENT;

ALTER TABLE praca
ADD COLUMN cos_tam varchar (20) NULL;

ALTER TABLE praca
DROP COLUMN data_koncowa;
 
SELECT nazwisko, imie
FROM Klient;

SELECT *
FROM Klient;

SELECT DISTINCT kod_pocztowy, miejscowosc
FROM Klient;

SELECT tytul, cena, cena*0.07 AS Marza
FROM Ksiazki;

SELECT tytul, cena+cena*0.07 AS cena_sprzedazy
FROM Ksiazki;

SELECT nazwisko+SPACE(1)+imie AS Klient, kod_pocztowy+SPACE(1)+miejscowosc AS Misto
FROM Klient;

SELECT tytul, cena
FROM Ksiazki
ORDER BY tytul;

SELECT tytul, cena
FROM Ksiazki
ORDER BY 2;

SELECT tytul, cena
FROM Ksiazki
ORDER BY cena DESC;

SELECT tytul, rok_wydania, cena
FROM Ksiazki
ORDER BY rok_wydania ASC, cena DESC;

SELECT tytul, cena
FROM Ksiazki
WHERE cena BETWEEN 50 AND 100;

SELECT tytul, cena
FROM Ksiazki
WHERE rok_wydania=2012;

SELECT nazwisko, imie
FROM Klient
WHERE imie LIKE 'A*';



