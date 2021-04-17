#include "mainwindow.h"
#include "QXlsx/header/xlsxconditionalformatting.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    QXlsx::Document doc;
    writeDoc(doc);
    doc.saveAs("test.xlsx");
}

MainWindow::~MainWindow()
{
}

void MainWindow::writeDoc(QXlsx::Document &doc) {

    doc.addSheet("test");

    double value = std::numeric_limits<double>::quiet_NaN();
    doc.write("A1", value);
}
