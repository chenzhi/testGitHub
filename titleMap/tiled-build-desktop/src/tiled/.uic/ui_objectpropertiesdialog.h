/********************************************************************************
** Form generated from reading UI file 'objectpropertiesdialog.ui'
**
** Created: Wed May 11 10:51:08 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTPROPERTIESDIALOG_H
#define UI_OBJECTPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjectPropertiesDialog
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *nameLabel;
    QLineEdit *name;
    QLabel *typeLabel;
    QLineEdit *type;
    QGroupBox *positionGroupBox;
    QGridLayout *gridLayout;
    QLabel *xLabel;
    QDoubleSpinBox *x;
    QLabel *yLabel;
    QDoubleSpinBox *y;
    QSpacerItem *horizontalSpacer;
    QGroupBox *sizeGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *widthLabel;
    QDoubleSpinBox *width;
    QLabel *heightLabel;
    QDoubleSpinBox *height;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ObjectPropertiesDialog)
    {
        if (ObjectPropertiesDialog->objectName().isEmpty())
            ObjectPropertiesDialog->setObjectName(QString::fromUtf8("ObjectPropertiesDialog"));
        ObjectPropertiesDialog->resize(308, 156);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ObjectPropertiesDialog->sizePolicy().hasHeightForWidth());
        ObjectPropertiesDialog->setSizePolicy(sizePolicy);
        ObjectPropertiesDialog->setBaseSize(QSize(0, 0));
        gridLayout_4 = new QGridLayout(ObjectPropertiesDialog);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        nameLabel = new QLabel(ObjectPropertiesDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout_3->addWidget(nameLabel, 0, 0, 1, 1);

        name = new QLineEdit(ObjectPropertiesDialog);
        name->setObjectName(QString::fromUtf8("name"));

        gridLayout_3->addWidget(name, 0, 1, 1, 1);

        typeLabel = new QLabel(ObjectPropertiesDialog);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        gridLayout_3->addWidget(typeLabel, 1, 0, 1, 1);

        type = new QLineEdit(ObjectPropertiesDialog);
        type->setObjectName(QString::fromUtf8("type"));

        gridLayout_3->addWidget(type, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 4);

        positionGroupBox = new QGroupBox(ObjectPropertiesDialog);
        positionGroupBox->setObjectName(QString::fromUtf8("positionGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(positionGroupBox->sizePolicy().hasHeightForWidth());
        positionGroupBox->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(positionGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        xLabel = new QLabel(positionGroupBox);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));

        gridLayout->addWidget(xLabel, 0, 0, 1, 1);

        x = new QDoubleSpinBox(positionGroupBox);
        x->setObjectName(QString::fromUtf8("x"));
        x->setDecimals(3);
        x->setMinimum(-999);
        x->setMaximum(9999);

        gridLayout->addWidget(x, 0, 1, 1, 1);

        yLabel = new QLabel(positionGroupBox);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));

        gridLayout->addWidget(yLabel, 1, 0, 1, 1);

        y = new QDoubleSpinBox(positionGroupBox);
        y->setObjectName(QString::fromUtf8("y"));
        y->setDecimals(3);
        y->setMinimum(-999);
        y->setMaximum(9999);

        gridLayout->addWidget(y, 1, 1, 1, 1);


        gridLayout_4->addWidget(positionGroupBox, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 1, 1, 1);

        sizeGroupBox = new QGroupBox(ObjectPropertiesDialog);
        sizeGroupBox->setObjectName(QString::fromUtf8("sizeGroupBox"));
        sizePolicy1.setHeightForWidth(sizeGroupBox->sizePolicy().hasHeightForWidth());
        sizeGroupBox->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(sizeGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widthLabel = new QLabel(sizeGroupBox);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));

        gridLayout_2->addWidget(widthLabel, 0, 0, 1, 1);

        width = new QDoubleSpinBox(sizeGroupBox);
        width->setObjectName(QString::fromUtf8("width"));
        width->setDecimals(3);
        width->setMaximum(9999);

        gridLayout_2->addWidget(width, 0, 1, 1, 1);

        heightLabel = new QLabel(sizeGroupBox);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));

        gridLayout_2->addWidget(heightLabel, 1, 0, 1, 1);

        height = new QDoubleSpinBox(sizeGroupBox);
        height->setObjectName(QString::fromUtf8("height"));
        height->setDecimals(3);
        height->setMaximum(9999);

        gridLayout_2->addWidget(height, 1, 1, 1, 1);


        gridLayout_4->addWidget(sizeGroupBox, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 3, 1, 1);


        retranslateUi(ObjectPropertiesDialog);

        QMetaObject::connectSlotsByName(ObjectPropertiesDialog);
    } // setupUi

    void retranslateUi(QWidget *ObjectPropertiesDialog)
    {
        ObjectPropertiesDialog->setWindowTitle(QApplication::translate("ObjectPropertiesDialog", "Form", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("ObjectPropertiesDialog", "Name:", 0, QApplication::UnicodeUTF8));
        typeLabel->setText(QApplication::translate("ObjectPropertiesDialog", "Type:", 0, QApplication::UnicodeUTF8));
        positionGroupBox->setTitle(QApplication::translate("ObjectPropertiesDialog", "Position", 0, QApplication::UnicodeUTF8));
        xLabel->setText(QApplication::translate("ObjectPropertiesDialog", "X:", 0, QApplication::UnicodeUTF8));
        yLabel->setText(QApplication::translate("ObjectPropertiesDialog", "Y:", 0, QApplication::UnicodeUTF8));
        sizeGroupBox->setTitle(QApplication::translate("ObjectPropertiesDialog", "Size", 0, QApplication::UnicodeUTF8));
        widthLabel->setText(QApplication::translate("ObjectPropertiesDialog", "Width:", 0, QApplication::UnicodeUTF8));
        heightLabel->setText(QApplication::translate("ObjectPropertiesDialog", "Height:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ObjectPropertiesDialog: public Ui_ObjectPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTPROPERTIESDIALOG_H
