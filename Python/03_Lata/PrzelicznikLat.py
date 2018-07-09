#-*- coding: utf-8 -*-
import sys
from PyQt4 import QtCore, QtGui
from lata import Ui_years

class Przelicznik(QtGui.QWidget):
	def __init__(self, parent=None):
		QtGui.QWidget.__init__(self, parent)
		self.ui = Ui_years()
		self.ui.setupUi(self)
		
		QtCore.QObject.connect(self.ui.Przelicz,QtCore.SIGNAL('clicked()'), self.start)
		
		
	def start(self):
		lata = self.ui.Lata.value()
		sekundy = lata * 12 * 30 * 24 * 60 * 60	
		self.ui.Sekundy.setText(str(sekundy))
		
if __name__=="__main__":
	app = QtGui.QApplication(sys.argv)
	myapp = Przelicznik()
	myapp.setWindowTitle('Przelicznik lat na sekundy')
	myapp.show()
	sys.exit(app.exec_())