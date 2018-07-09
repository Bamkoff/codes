#-*- coding: utf-8 -*-
import sys
from PyQt4 import QtCore, QtGui
from Bin import Ui_Converter

class Converter(QtGui.QWidget):
	def __init__(self, parent=None):
		QtGui.QWidget.__init__(self, parent)
		self.ui = Ui_Converter()
		self.ui.setupUi(self)
		
		QtCore.QObject.connect(self.ui.Przelicz,QtCore.SIGNAL("clicked()"), self.start)
		
	def start(self):
		wartosc = self.ui.Z.toPlainText()
		print wartosc
		przecinek = -1
		for i in range(0 , wartosc.count()-1):
			if(wartosc[i]==','):przecinek=i
		
		if self.ui.Dec.isChecked():
			dlugosc = wartosc.count() - 1
			do_wypisania =''
			licznik = 1
			mnoznik = 1
			wynik = 0
			while dlugosc>-1:
				print dlugosc
				if licznik>1:
					for i in range(1,licznik):
						mnoznik = mnoznik * 2
				
				wynik = wynik+(int(wartosc[dlugosc])*mnoznik)
				mnoznik = 1	
				dlugosc = dlugosc - 1
				licznik = licznik + 1
			
			self.ui.Na.setText(str(wynik))
				
				
		if self.ui.Bin.isChecked():
			wartosc_int = int(wartosc)
			mod = 0
			wynik1 = ''
			
			while wartosc_int>=1:
				mod = wartosc_int%2
				wynik1+=str(mod)
				wynik1+=";"
				wartosc_int=wartosc_int/2
			
			list = wynik1.split(";")
			list.reverse()
			wynik2=''
			wynik2 = "".join(list)
			
			self.ui.Na.setText(wynik2)
		
if __name__ == "__main__":
	app = QtGui.QApplication(sys.argv)
	myapp = Converter()
	myapp.setWindowTitle('Przelicznik Dec/Bin')
	myapp.show()
	sys.exit(app.exec_())