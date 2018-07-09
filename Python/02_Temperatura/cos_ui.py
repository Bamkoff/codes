# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'cos.ui'
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

class Ui_cos(object):
    def setupUi(self, cos):
        cos.setObjectName(_fromUtf8("cos"))
        cos.setWindowModality(QtCore.Qt.WindowModal)
        cos.setEnabled(True)
        cos.resize(350, 246)
        self.P_cel = QtGui.QRadioButton(cos)
        self.P_cel.setGeometry(QtCore.QRect(50, 50, 82, 18))
        self.P_cel.setObjectName(_fromUtf8("P_cel"))
        self.Z = QtGui.QButtonGroup(cos)
        self.Z.setObjectName(_fromUtf8("Z"))
        self.Z.addButton(self.P_cel)
        self.P_fah = QtGui.QRadioButton(cos)
        self.P_fah.setGeometry(QtCore.QRect(50, 70, 82, 18))
        self.P_fah.setObjectName(_fromUtf8("P_fah"))
        self.Z.addButton(self.P_fah)
        self.P_kel = QtGui.QRadioButton(cos)
        self.P_kel.setGeometry(QtCore.QRect(50, 90, 82, 18))
        self.P_kel.setObjectName(_fromUtf8("P_kel"))
        self.Z.addButton(self.P_kel)
        self.W_cel = QtGui.QRadioButton(cos)
        self.W_cel.setGeometry(QtCore.QRect(190, 50, 82, 18))
        self.W_cel.setChecked(True)
        self.W_cel.setObjectName(_fromUtf8("W_cel"))
        self.Na = QtGui.QButtonGroup(cos)
        self.Na.setObjectName(_fromUtf8("Na"))
        self.Na.addButton(self.W_cel)
        self.W_fah = QtGui.QRadioButton(cos)
        self.W_fah.setGeometry(QtCore.QRect(190, 70, 82, 18))
        self.W_fah.setChecked(False)
        self.W_fah.setObjectName(_fromUtf8("W_fah"))
        self.Na.addButton(self.W_fah)
        self.W_kel = QtGui.QRadioButton(cos)
        self.W_kel.setGeometry(QtCore.QRect(190, 90, 82, 18))
        self.W_kel.setObjectName(_fromUtf8("W_kel"))
        self.Na.addButton(self.W_kel)
        self.pushButton = QtGui.QPushButton(cos)
        self.pushButton.setGeometry(QtCore.QRect(250, 210, 75, 23))
        self.pushButton.setCursor(QtGui.QCursor(QtCore.Qt.PointingHandCursor))
        self.pushButton.setObjectName(_fromUtf8("pushButton"))
        self.label = QtGui.QLabel(cos)
        self.label.setGeometry(QtCore.QRect(30, 20, 46, 13))
        self.label.setObjectName(_fromUtf8("label"))
        self.label_2 = QtGui.QLabel(cos)
        self.label_2.setGeometry(QtCore.QRect(180, 20, 46, 13))
        self.label_2.setObjectName(_fromUtf8("label_2"))
        self.label_3 = QtGui.QLabel(cos)
        self.label_3.setGeometry(QtCore.QRect(30, 140, 71, 16))
        self.label_3.setObjectName(_fromUtf8("label_3"))
        self.doubleSpinBox = QtGui.QDoubleSpinBox(cos)
        self.doubleSpinBox.setGeometry(QtCore.QRect(30, 160, 91, 22))
        self.doubleSpinBox.setCursor(QtGui.QCursor(QtCore.Qt.IBeamCursor))
        self.doubleSpinBox.setButtonSymbols(QtGui.QAbstractSpinBox.NoButtons)
        self.doubleSpinBox.setMinimum(-1000.0)
        self.doubleSpinBox.setMaximum(1000.0)
        self.doubleSpinBox.setObjectName(_fromUtf8("doubleSpinBox"))
        self.frame = QtGui.QFrame(cos)
        self.frame.setGeometry(QtCore.QRect(30, 40, 120, 80))
        self.frame.setFrameShape(QtGui.QFrame.StyledPanel)
        self.frame.setFrameShadow(QtGui.QFrame.Raised)
        self.frame.setObjectName(_fromUtf8("frame"))
        self.frame_2 = QtGui.QFrame(cos)
        self.frame_2.setGeometry(QtCore.QRect(170, 40, 120, 80))
        self.frame_2.setFrameShape(QtGui.QFrame.StyledPanel)
        self.frame_2.setFrameShadow(QtGui.QFrame.Raised)
        self.frame_2.setObjectName(_fromUtf8("frame_2"))
        self.Zakoncz = QtGui.QPushButton(cos)
        self.Zakoncz.setGeometry(QtCore.QRect(160, 210, 75, 23))
        self.Zakoncz.setObjectName(_fromUtf8("Zakoncz"))
        self.textBrowser = QtGui.QTextBrowser(cos)
        self.textBrowser.setGeometry(QtCore.QRect(170, 160, 101, 31))
        self.textBrowser.setObjectName(_fromUtf8("textBrowser"))
        self.label_4 = QtGui.QLabel(cos)
        self.label_4.setGeometry(QtCore.QRect(170, 140, 46, 13))
        self.label_4.setObjectName(_fromUtf8("label_4"))
        self.frame.raise_()
        self.frame_2.raise_()
        self.P_cel.raise_()
        self.P_fah.raise_()
        self.P_kel.raise_()
        self.W_cel.raise_()
        self.W_fah.raise_()
        self.W_kel.raise_()
        self.pushButton.raise_()
        self.label.raise_()
        self.label_2.raise_()
        self.label_3.raise_()
        self.doubleSpinBox.raise_()
        self.Zakoncz.raise_()
        self.textBrowser.raise_()
        self.label_4.raise_()

        self.retranslateUi(cos)
        QtCore.QObject.connect(self.Zakoncz, QtCore.SIGNAL(_fromUtf8("clicked()")), cos.close)
        QtCore.QMetaObject.connectSlotsByName(cos)

    def retranslateUi(self, cos):
        cos.setWindowTitle(_translate("cos", "Form", None))
        self.P_cel.setText(_translate("cos", "Celcjusze", None))
        self.P_fah.setText(_translate("cos", "Fahrenheity", None))
        self.P_kel.setText(_translate("cos", "Kelwiny", None))
        self.W_cel.setText(_translate("cos", "Celcjusze", None))
        self.W_fah.setText(_translate("cos", "Fahrenheity", None))
        self.W_kel.setText(_translate("cos", "Kelwiny", None))
        self.pushButton.setText(_translate("cos", "Oblicz", None))
        self.label.setText(_translate("cos", "Z czego?", None))
        self.label_2.setText(_translate("cos", "Na co?", None))
        self.label_3.setText(_translate("cos", "Temperatura", None))
        self.Zakoncz.setText(_translate("cos", "Zakończ", None))
        self.label_4.setText(_translate("cos", "Po Zamianie", None))

