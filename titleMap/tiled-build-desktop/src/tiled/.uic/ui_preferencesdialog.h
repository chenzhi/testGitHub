/********************************************************************************
** Form generated from reading UI file 'preferencesdialog.ui'
**
** Created: Wed May 11 10:51:08 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *layerDataCombo;
    QCheckBox *reloadTilesetImages;
    QCheckBox *enableDtd;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *languageCombo;
    QCheckBox *openGL;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(402, 273);
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        groupBox = new QGroupBox(PreferencesDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        layerDataCombo = new QComboBox(groupBox);
        layerDataCombo->setObjectName(QString::fromUtf8("layerDataCombo"));

        gridLayout->addWidget(layerDataCombo, 0, 1, 1, 1);

        reloadTilesetImages = new QCheckBox(groupBox);
        reloadTilesetImages->setObjectName(QString::fromUtf8("reloadTilesetImages"));

        gridLayout->addWidget(reloadTilesetImages, 2, 0, 1, 2);

        enableDtd = new QCheckBox(groupBox);
        enableDtd->setObjectName(QString::fromUtf8("enableDtd"));

        gridLayout->addWidget(enableDtd, 1, 0, 1, 2);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(PreferencesDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        languageCombo = new QComboBox(groupBox_2);
        languageCombo->setObjectName(QString::fromUtf8("languageCombo"));

        gridLayout_2->addWidget(languageCombo, 1, 1, 1, 1);

        openGL = new QCheckBox(groupBox_2);
        openGL->setObjectName(QString::fromUtf8("openGL"));

        gridLayout_2->addWidget(openGL, 2, 0, 1, 2);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(layerDataCombo);
        label_2->setBuddy(languageCombo);
#endif // QT_NO_SHORTCUT

        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PreferencesDialog", "Saving and Loading", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PreferencesDialog", "&Store tile layer data as:", 0, QApplication::UnicodeUTF8));
        layerDataCombo->clear();
        layerDataCombo->insertItems(0, QStringList()
         << QApplication::translate("PreferencesDialog", "XML", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PreferencesDialog", "Base64 (uncompressed)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PreferencesDialog", "Base64 (gzip compressed)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PreferencesDialog", "Base64 (zlib compressed)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PreferencesDialog", "CSV", 0, QApplication::UnicodeUTF8)
        );
        reloadTilesetImages->setText(QApplication::translate("PreferencesDialog", "&Reload tileset images when they change", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        enableDtd->setToolTip(QApplication::translate("PreferencesDialog", "Not enabled by default since a reference to an external DTD is known to cause problems with some XML parsers.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        enableDtd->setText(QApplication::translate("PreferencesDialog", "Include &DTD reference in saved maps", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("PreferencesDialog", "Interface", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PreferencesDialog", "&Language:", 0, QApplication::UnicodeUTF8));
        openGL->setText(QApplication::translate("PreferencesDialog", "Hardware &accelerated drawing (OpenGL)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
