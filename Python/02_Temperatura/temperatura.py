#-*- coding: utf-8 -*-
import sys

from PyQt4 import QtCore, QtGui
from cos_ui import Ui_cos


global cel_z
global fah_z
global kel_z
global cel_w
global fah_w
global kel_w



class MyCounter(QtGui.QWidget):
	def __init__(self, parent=None):
		QtGui.QWidget.__init__(self, parent)
		self.ui = Ui_cos()
		self.ui.setupUi(self)
		
		QtCore.QObject.connect(self.ui.pushButton,QtCore.SIGNAL("clicked()"), self.start)
		#QtCore.QObject.connect(self.ui.P_cel,QtCore.SIGNAL("toggled(bool)"), self.toggle_cel_z)
		#QtCore.QObject.connect(self.ui.P_fah,QtCore.SIGNAL("toggled(bool)"), self.toggle_fah_z)
		#QtCore.QObject.connect(self.ui.P_kel,QtCore.SIGNAL("toggled(bool)"), self.toggle_kel_z)
		#QtCore.QObject.connect(self.ui.W_cel,QtCore.SIGNAL("toggled(bool)"), self.toggle_cel_w)
		#QtCore.QObject.connect(self.ui.W_fah,QtCore.SIGNAL("toggled(bool)"), self.toggle_fah_w)
		#QtCore.QObject.connect(self.ui.W_kel,QtCore.SIGNAL("toggled(bool)"), self.toggle_kel_w)
		

	
	def start(self):
		print 'oblicz'
		print self.ui.doubleSpinBox.value()
		temp = self.ui.doubleSpinBox.value()
		cel_z = self.ui.P_cel.isChecked()
		fah_z = self.ui.P_fah.isChecked()
		kel_z = self.ui.P_kel.isChecked()
		cel_w = self.ui.W_cel.isChecked()
		fah_w = self.ui.W_fah.isChecked()
		kel_w = self.ui.W_kel.isChecked()
		wynik = 0
		#print cel_z
		#print fah_z
		#print kel_z
		#print cel_w
		#print fah_w
		#print kel_w
		
		if cel_z == True and fah_w == True:
			wynik = (1.8*float(temp))+32
			
		if cel_z == True and kel_w == True:
			wynik = float(temp)+273.15 
		
		if kel_z == True and cel_w == True:
			wynik = float(temp)-273.15
			
		if fah_z == True and cel_w == True:
			wynik = (1.8*float(temp))+32
			
		if fah_z == True and cel_w == True:
			wynik = 0.555555556*(float(temp)-32)
			
		if kel_z == True and fah_w == True:
			wynik = float(temp) - 273.15
			wynik = (1.8*float(wynik))+32
			
		if fah_z == True and kel_w == True:
			wynik = 0.555555556*(float(temp)-32)
			wynik = float(wynik)+273.15
		
		print wynik
		self.ui.textBrowser.setText(str(wynik))
		
		
		
if __name__ == "__main__":
	app = QtGui.QApplication(sys.argv)
	myapp = MyCounter()
	myapp.setWindowTitle('Przelicznik Temperatur')
	myapp.show()
	sys.exit(app.exec_())
