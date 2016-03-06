#ifndef BUTTON
#define BUTTON

#include <QToolButton>


class Button : public QToolButton
{
    Q_OBJECT

public:
    explicit Button(const QString &text, QWidget *parent = 0);

    QSize sizeHint() const Q_DECL_OVERRIDE;
};



#endif // BUTTON

