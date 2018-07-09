# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'imageviewer.ui'
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

class Ui_ImageViewer(object):
    def setupUi(self, ImageViewer):
        ImageViewer.setObjectName(_fromUtf8("ImageViewer"))
        ImageViewer.resize(484, 409)
        self.Image = QtGui.QGraphicsView(ImageViewer)
        self.Image.setGeometry(QtCore.QRect(10, -10, 461, 351))
        self.Image.setObjectName(_fromUtf8("Image"))
        self.right = QtGui.QPushButton(ImageViewer)
        self.right.setGeometry(QtCore.QRect(230, 340, 251, 31))
        self.right.setObjectName(_fromUtf8("right"))
        self.left = QtGui.QPushButton(ImageViewer)
        self.left.setGeometry(QtCore.QRect(0, 340, 241, 31))
        self.left.setObjectName(_fromUtf8("left"))
        self.pushButton = QtGui.QPushButton(ImageViewer)
        self.pushButton.setGeometry(QtCore.QRect(400, 380, 75, 23))
        self.pushButton.setObjectName(_fromUtf8("pushButton"))

        self.retranslateUi(ImageViewer)
        QtCore.QObject.connect(self.pushButton, QtCore.SIGNAL(_fromUtf8("clicked()")), ImageViewer.close)
        QtCore.QMetaObject.connectSlotsByName(ImageViewer)

    def retranslateUi(self, ImageViewer):
        ImageViewer.setWindowTitle(_translate("ImageViewer", "Form", None))
        self.right.setText(_translate("ImageViewer", ">", None))
        self.left.setText(_translate("ImageViewer", "<", None))
        self.pushButton.setText(_translate("ImageViewer", "Zamknij", None))

