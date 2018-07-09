/*
Przypomnij sobie program Dec2Bin napisany w Pascalu:
 while liczba>0 do
   begin
     reszta:=liczba mod podstawa;
     liczba:=liczba div podstawa;
     if reszta=0 then write('0') else write('1');
   end;
i tablice priorytetow operatorow, m.in.
 2.   () []
 3.   ++  ~ (negacja bitowa)  !  sizeof  & (referencja)
 6.   *  /  %
 7.   +  -
 8.   <<  >>  (shift, czyli przesuniecie bitowe)
 9.   <  >  <=  >= (porownania)
10.   ==  !=
11.   & (AND bitowe)
12.   ^ (XOR bitowe)
13.   | (OR bitowe)
14.   &&
15.   ||
17.   =  *=  /=  %=  +=  -=  >>=  <<=  &=  ^=  !=  (podstawienia)
*/

#include <iostream>
#include <conio-bis.h>
using namespace std;

main (){
  int lc=1024+128+2+1;

  for (int i = sizeof(lc) * 8 -1; i>=0; --i)
   cout <<  ( lc >> i & 1 )  <<  ( (i%8) ? "" : "." );

  /*
  for (int i = sizeof(lc) * 8 -1; i>=0; --i)
    bin += 48+ ((lc >> i) & 1);
  cout << bin << endl; 
  */
  getch();
}
