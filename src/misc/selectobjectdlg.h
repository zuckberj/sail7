/****************************************************************************

         SelectObjectDlg Class
         Copyright (C) 2012 Andre Deperrois 
         All rights reserved

*****************************************************************************/

#ifndef SELECTOBJECTDLG_H
#define SELECTOBJECTDLG_H

#include <QDialog>
#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QListWidget>

class SelectObjectDlg : public QDialog
{
    Q_OBJECT

    friend class BoatDlg;
    friend class Sail7;

public:
    SelectObjectDlg(void *parent = nullptr);
    

private slots:
    void OnOK();

public:
    void InitDialog(QString Question, QStringList *pstrList);

private:
    void keyPressEvent(QKeyEvent *event);
    void SetupLayout();


    QLabel      *m_pctrlMessage;
    QListWidget *m_pctrlNameList;
    QPushButton *OKButton;
    QPushButton *CancelButton;

    QString m_SelectedName;

};

#endif // SELECTOBJECTDLG_H
