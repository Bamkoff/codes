USE master;
DROP DATABASE Firma_kurierska;
GO

CREATE DATABASE Firma_kurierska;
GO

USE Firma_kurierska;
GO

SET LANGUAGE polski;
GO

IF OBJECT_ID('Klienci', 'U') IS NOT NULL
BEGIN
	DROP TABLE Klienci;
END
IF OBJECT_ID('Dostawcy', 'U') IS NOT NULL
BEGIN
    DROP TABLE Dostawcy;
END
IF OBJECT_ID('Samochody', 'U') IS NOT NULL
BEGIN    
	DROP TABLE Samochody;
END
IF OBJECT_ID('Zamówienia', 'U') IS NOT NULL
BEGIN
	DROP TABLE Zamówienia;
END
IF OBJECT_ID('Transporty', 'U') IS NOT NULL
BEGIN
	DROP TABLE Transporty;
END

CREATE TABLE Klienci 
(
    id_klienta  INT NOT NULL IDENTITY(1,1) CONSTRAINT pk_klient_id PRIMARY KEY,    
    imie VARCHAR(30) CONSTRAINT ck_klient_imie CHECK (imie LIKE '[A-Z]%'),
	nazwisko VARCHAR(30) CONSTRAINT ck_klient_nazw CHECK (nazwisko LIKE '[A-Z]%'),
	nr_domu INT CONSTRAINT ck_klient_dom CHECK (nr_domu > 0),
	nr_mieszkania INT CONSTRAINT ck_klient_miesz CHECK (nr_mieszkania > 0),
	ulica VARCHAR(30),
	miasto VARCHAR(30) CONSTRAINT ck_klient_miasto CHECK (miasto LIKE '[A-Z]%'),
	telefon VARCHAR(9) UNIQUE CONSTRAINT ck_klient_tel CHECK (telefon LIKE '[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]'),
);

CREATE TABLE Dostawcy 
(
    id_dostawcy  INT NOT NULL IDENTITY(1,1) CONSTRAINT pk_dostawca_id PRIMARY KEY,    
    imie VARCHAR(30) CONSTRAINT ck_dostawca_imie CHECK (imie LIKE '[A-Z]%'),
	nazwisko VARCHAR(30) CONSTRAINT ck_dostawca_nazw CHECK (nazwisko LIKE '[A-Z]%'),
);

CREATE TABLE Samochody 
(
    dowod_rejestracyjny VARCHAR(10) NOT NULL CONSTRAINT pk_samochod_dow PRIMARY KEY,    
    marka VARCHAR(30) CONSTRAINT ck_samochod_marka CHECK (marka LIKE '[A-Z]%'),
	ladownosc INT NOT NULL CONSTRAINT ck_samochod_lad CHECK (ladownosc > 0),
);

CREATE TABLE Zamowienia 
(
    nr_zamowienia INT NOT NULL IDENTITY(1,1) CONSTRAINT pk_zamowienie_nr PRIMARY KEY,
	id_nadawcy  INT NOT NULL REFERENCES Klienci(id_klienta),
	id_odbiorcy  INT NOT NULL REFERENCES Klienci(id_klienta),
	stan_zamowienia VARCHAR(20) CONSTRAINT ck_zamowienie_stan CHECK (stan_zamowienia in ('Przyjęte', 'W drodze', 'Zrealizowane', 'Odrzucone', 'Rozpatrywane')) DEFAULT 'Rozpatrywane',
	data_zamowienia DATETIME,
);

CREATE TABLE Transporty 
(
	nr_transportu INT NOT NULL IDENTITY(1,1) CONSTRAINT pk_transport_nr PRIMARY KEY,
    nr_zamowienia INT NOT NULL REFERENCES Zamowienia(nr_zamowienia) UNIQUE,
	id_dostawcy  INT NOT NULL REFERENCES Dostawcy(id_dostawcy),
	samochod VARCHAR(10) REFERENCES Samochody(dowod_rejestracyjny),
	data_transportu DATETIME,
);

INSERT INTO Dostawcy (imie, nazwisko)
VALUES ('Bogdan', 'Chmurzyński'),
	   ('Daniel', 'Prus'),
	   ('Jerzy', 'Czapla');

INSERT INTO Klienci(imie, nazwisko, nr_domu, nr_mieszkania, ulica, miasto, telefon)
VALUES ('Bogdan', 'Jerzyński', 2, 4, 'pl. Wyzwolenia', 'Poznań', '930492231'),
	   ('Hubert', 'Kowalski', 5, 14, 'os. Sobieskiego', 'Poznań', '980430342'),
	   ('Damian', 'Nowak', 19, 120, 'os. Orła Białego', 'Poznań', '689512332');

INSERT INTO Samochody (dowod_rejestracyjny, marka, ladownosc)
VALUES ('PO12ZX', 'Fiat', 20),
	   ('PO43XD', 'Opel', 30),
	   ('PO21D3', 'Mercedes', 40);
	   
INSERT INTO Zamowienia  (id_nadawcy, id_odbiorcy, data_zamowienia)
VALUES (2, 1, GETDATE()),
	   (3, 2, GETDATE()),
	   (1, 2, GETDATE());

UPDATE Zamowienia
SET stan_zamowienia = 'Przyjęte'
WHERE nr_zamowienia = 2;

UPDATE Zamowienia
SET stan_zamowienia = 'Odrzucone'
WHERE nr_zamowienia = 3;

INSERT INTO Transporty (nr_zamowienia, id_dostawcy, samochod, data_transportu)
VALUES (2, 1, 'PO12ZX', GETDATE());

UPDATE Zamowienia
SET stan_zamowienia = 'Zrealizowane'
WHERE nr_zamowienia = 2;

SELECT *
FROM Klienci;

SELECT *
FROM Dostawcy;

SELECT *
FROM Samochody;

SELECT *
FROM Zamowienia;

SELECT *
FROM Transporty;