#ifndef RECORDWIDGET_H
#define RECORDWIDGET_H

#include <QWidget>

namespace Ui {
class RecordWidget;
}

class RecordWidget : public QWidget
{
    Q_OBJECT

public:
    explicit RecordWidget(const std::string& site, QWidget *parent = nullptr);
    ~RecordWidget();

    QSize sizeHint() const;

private:
    Ui::RecordWidget *ui;
};

#endif // RECORDWIDGET_H
