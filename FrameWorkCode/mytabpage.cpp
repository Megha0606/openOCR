#include "mytabpage.h"

mytabpage::mytabpage(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant mytabpage::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex mytabpage::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex mytabpage::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int mytabpage::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int mytabpage::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant mytabpage::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
