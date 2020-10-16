#ifndef CSV_WIDGET_COMPLETERPOPUP_HPP
#define CSV_WIDGET_COMPLETERPOPUP_HPP

#include <QListView>

namespace CSVWidget
{
    class CompleterPopup : public QListView
    {
        public:
            CompleterPopup(QWidget *parent = 0);

            int sizeHintForRow(int row) const override;
    };
}

#endif
