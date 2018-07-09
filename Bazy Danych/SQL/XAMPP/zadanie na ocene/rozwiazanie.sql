USE quiz;

/*1*/
SELECT *
FROM pytania
WHERE id=15;

/*2*/
SELECT *
FROM pytania
WHERE answer='a';

/*3*/
SELECT *
FROM pytania
WHERE rok=2007;

/*4*/
SELECT *
FROM pytania
WHERE rok=2009 && kategoria='programowanie';

/*5*/
SELECT tresc, odpa, odpb, odpc, odpd
FROM pytania
WHERE rok=2010;

/*6*/
SELECT *
FROM pytania
ORDER BY tresc ASC;

/*7*/
SELECT tresc
FROM pytania
WHERE id BETWEEN 10 AND 12;

/*8*/
SELECT *
FROM pytania
WHERE tresc='Jak%';

/*9*/
SELECT *
FROM pytania
WHERE tresc='%C++%';

/*10*/
SELECT *
FROM pytania
WHERE (kategoria='programowanie' || kategoria='systemy operacyjne i sieci') && rok=2012;
