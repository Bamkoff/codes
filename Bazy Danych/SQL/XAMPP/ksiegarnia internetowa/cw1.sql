USE ksiegarnia_internetowa;

CREATE TABLE Pracownicy
(
id int AUTO_INCREMENT PRIMARY KEY,
imie varchar (20),
nazwisko varchar (30),
kod_pocztowy varchar(6),
miejscowosc varchar (50),
ulica_numer_domu varchar (30),
data_zatrudnienia date,
stanowisko char,
placa decimal
);

INSERT INTO Pracownicy(imie, nazwisko, kod_pocztowy, miejscowosc, ulica_numer_domu, data_zatrudnienia, stanowisko, placa)
VALUES ('Bartosz', 'Bawrot', '78-934', 'Waclawice', 'Jana Pawla 32', '2000-04-05', 'B', 2000),
	   ('Wojciech', 'Inkos', '73-142', 'Szczecin', 'Aleja Piastow 42', '2001-04-02', 'A', 2500),
	   ('Jan', 'Maryjan', '78-235', 'Szczecin' ,'Kolontaja 35', '2004-12-01', 'C', 2550);