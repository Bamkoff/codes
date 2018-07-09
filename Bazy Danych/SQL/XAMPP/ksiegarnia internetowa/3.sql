DROP DATABASE ksiegarnia_internetowa;
CREATE DATABASE ksiegarnia_internetowa;

USE ksiegarnia_internetowa;
CREATE TABLE Klient
(	id_klienta int PRIMARY KEY,
	nazwisko varchar (60) NOT NULL,
	imie varchar (40) NOT NULL,
	kod_pocztowy varchar (6),
	miejscowosc varchar (50),
	ulica varchar (50),
	nr_domu varchar (7),
	PESEL varchar (11) NOT NULL UNIQUE,
	telefon varchar (12),
	adres_e_mail varchar (70)
);

CREATE TABLE Ksiazki
(
	id_ksiazki INT PRIMARY KEY,
	tytul varchar (100) NOT NULL UNIQUE,
	id_autora int NOT NULL,
	cena decimal,
	wydawnictwo varchar (20),
	temat varchar (30),
	miejsce_wydania varchar (28),
	rok_wydania varchar (4) NOT NULL DEFAULT '2012',
	jezyk_ksiazki varchar (15),
	opis varchar (100)
);
CREATE TABLE Autor
(
	id_autora int AUTO_INCREMENT NOT NULL PRIMARY KEY,
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

INSERT INTO Ksiazki (id_ksiazki, tytul, id_autora, cena, wydawnictwo, temat)
VALUES 
(1,'Aplikacje internetowe', 2, 57, 'Helion', 'Internet'),
(2,'Programowanie w PHP', 2, 72, 'Helion', 'Internet'),
(3,'SQL Server 2008', 3, 45, 'PWN', 'Bazy danych');

INSERT INTO Klient (id_klienta, nazwisko, imie, PESEL)
VALUES
(1, 'Nowak', 'Andrzej', '7802103121'),
(2, 'Kowalski', 'Jan', '810920217239'),
(3, 'Górski', 'Antoni', '89120217239');

UPDATE Klient SET nazwisko='Brycza'
WHERE nazwisko='Kowalski';

UPDATE Ksiazki SET wydawnictwo='Helionek'
WHERE id_autora=2;


