# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'Bin.ui'
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

class Ui_Converter(object):
    def setupUi(self, Converter):
        Converter.setObjectName(_fromUtf8("Converter"))
        Converter.resize(379, 215)
        self.Zakoncz = QtGui.QPushButton(Converter)
        self.Zakoncz.setGeometry(QtCore.QRect(290, 180, 75, 23))
        self.Zakoncz.setObjectName(_fromUtf8("Zakoncz"))
        self.Przelicz = QtGui.QPushButton(Converter)
        self.Przelicz.setGeometry(QtCore.QRect(150, 160, 75, 23))
        self.Przelicz.setObjectName(_fromUtf8("Przelicz"))
        self.Na = QtGui.QTextBrowser(Converter)
        self.Na.setGeometry(QtCore.QRect(200, 110, 161, 31))
        self.Na.setObjectName(_fromUtf8("Na"))
        self.Dec = QtGui.QRadioButton(Converter)
        self.Dec.setGeometry(QtCore.QRect(30, 30, 82, 18))
        self.Dec.setObjectName(_fromUtf8("Dec"))
        self.Bin = QtGui.QRadioButton(Converter)
        self.Bin.setGeometry(QtCore.QRect(30, 50, 82, 18))
        self.Bin.setObjectName(_fromUtf8("Bin"))
        self.label = QtGui.QLabel(Converter)
        self.label.setGeometry(QtCore.QRect(40, 10, 71, 20))
        self.label.setObjectName(_fromUtf8("label"))
        self.label_2 = QtGui.QLabel(Converter)
        self.label_2.setGeometry(QtCore.QRect(20, 90, 91, 16))
        self.label_2.setObjectName(_fromUtf8("label_2"))
        self.label_3 = QtGui.QLabel(Converter)
        self.label_3.setGeometry(QtCore.QRect(200, 90, 71, 16))
        self.label_3.setObjectName(_fromUtf8("label_3"))
        self.Z = QtGui.QTextEdit(Converter)
        self.Z.setGeometry(QtCore.QRect(20, 110, 161, 31))
        self.Z.setObjectName(_fromUtf8("Z"))

        self.retranslateUi(Converter)
        QtCore.QObject.connect(self.Zakoncz, QtCore.SIGNAL(_fromUtf8("clicked()")), Converter.close)
        QtCore.QMetaObject.connectSlotsByName(Converter)

    def retranslateUi(self, Converter):
        Converter.setWindowTitle(_translate("Converter", "Form", None))
        self.Zakoncz.setText(_translate("Converter", "Zakończ", None))
        self.Przelicz.setText(_translate("Converter", "Przelicz", None))
        self.Dec.setText(_translate("Converter", "Dec", None))
        self.Bin.setText(_translate("Converter", "Bin", None))
        self.label.setText(_translate("Converter", "Zamiana na:", None))
        self.label_2.setText(_translate("Converter", "Tu wpisz wartość", None))
        self.label_3.setText(_translate("Converter", "Jej zamiana:", None))

