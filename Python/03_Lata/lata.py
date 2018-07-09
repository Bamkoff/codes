# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'lata.ui'
#
# Created by: PyQt4 UI code generator 4.11.4
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    def _fromUtf8(s):
        return s

try:
    _encoding = QtGui.QApplication.UnicodeUTF8
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig, _encoding)
except AttributeError:
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig)

class Ui_years(object):
    def setupUi(self, years):
        years.setObjectName(_fromUtf8("years"))
        years.resize(441, 218)
        self.Przelicz = QtGui.QPushButton(years)
        self.Przelicz.setGeometry(QtCore.QRect(20, 110, 75, 23))
        self.Przelicz.setObjectName(_fromUtf8("Przelicz"))
        self.Zamknij = QtGui.QPushButton(years)
        self.Zamknij.setGeometry(QtCore.QRect(300, 180, 75, 23))
        self.Zamknij.setObjectName(_fromUtf8("Zamknij"))
        self.Lata = QtGui.QSpinBox(years)
        self.Lata.setGeometry(QtCore.QRect(20, 60, 61, 31))
        self.Lata.setObjectName(_fromUtf8("Lata"))
        self.Sekundy = QtGui.QTextBrowser(years)
        self.Sekundy.setGeometry(QtCore.QRect(140, 60, 271, 31))
        self.Sekundy.setObjectName(_fromUtf8("Sekundy"))
        self.label = QtGui.QLabel(years)
        self.label.setGeometry(QtCore.QRect(20, 30, 61, 20))
        self.label.setObjectName(_fromUtf8("label"))
        self.label_2 = QtGui.QLabel(years)
        self.label_2.setGeometry(QtCore.QRect(90, 70, 46, 13))
        self.label_2.setObjectName(_fromUtf8("label_2"))
        self.label_3 = QtGui.QLabel(years)
        self.label_3.setGeometry(QtCore.QRect(420, 70, 46, 13))
        self.label_3.setObjectName(_fromUtf8("label_3"))

        self.retranslateUi(years)
        QtCore.QObject.connect(self.Zamknij, QtCore.SIGNAL(_fromUtf8("clicked()")), years.close)
        QtCore.QMetaObject.connectSlotsByName(years)

    def retranslateUi(self, years):
        years.setWindowTitle(_translate("years", "Form", None))
        self.Przelicz.setText(_translate("years", "Przelicz", None))
        self.Zamknij.setText(_translate("years", "Zamknij", None))
        self.label.setText(_translate("years", "Podaj lata:", None))
        self.label_2.setText(_translate("years", "lat", None))
        self.label_3.setText(_translate("years", "sek.", None))

