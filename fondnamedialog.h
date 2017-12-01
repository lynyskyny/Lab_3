#ifndef FONDNAMEDIALOG_H
#define FONDNAMEDIALOG_H

#include <QDialog>
#include "queue.h"
#include "labeldialog.h"

namespace Ui {
class FondNameDialog;
}

class FondNameDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit FondNameDialog(Queue *_queue);
    ~FondNameDialog();
    
private:
    Ui::FondNameDialog *ui;
    Queue *queue;
    LabelDialog *lblDial;
private slots:
    void count();
};

#endif // FONDNAMEDIALOG_H
