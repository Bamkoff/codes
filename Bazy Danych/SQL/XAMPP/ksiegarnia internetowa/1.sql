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
	tytul varchar (100) NOT NULL,
	autor varchar (80) NOT NULL,
	cena decimal,
	wydawnictwo varchar (20),
	temat varchar (30),
	miejsce_wydania varchar (28),
	rok_wydania navchar (4) NOT NULL DEFAULT '2012',
	jezyk_ksiazki varchar (15),
	opis varchar (100)
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






