#-*- coding: utf-8 -*-
import sys
from PyQt4 import QtCore, QtGui
from interface import Ui_ImageViewer

class ImageViewer(QtGui.QWidget):
	def __init__(self, parent=None):
		QtGui.QWidget.__init__(self, parent)
		self.ui = Ui_ImageViewer()
		self.ui.setupUi(self)
		
		


		
		
		
		
if __name__ == "__main__":
	app = QtGui.QApplication(sys.argv)
	myapp = ImageViewer()
	myapp.setWindowTitle('Przegląd zdjęć')
	myapp.show()
	sys.exit(app.exec_())