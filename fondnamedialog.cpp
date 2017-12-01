#include "fondnamedialog.h"
#include "ui_fondnamedialog.h"

FondNameDialog::FondNameDialog(Queue *_queue) :
    queue(_queue),
    ui(new Ui::FondNameDialog)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(count()));
}

void FondNameDialog::count()
{
    if(queue->countFond(ui->lineEdit->text())!=0)
        lblDial = new LabelDialog("Profit is "+QString::number(queue->countFond(ui->lineEdit->text())));
    else
        lblDial == new LabelDialog("No money for that fond");
    lblDial->show();
}

FondNameDialog::~FondNameDialog()
{
    delete ui;
}
