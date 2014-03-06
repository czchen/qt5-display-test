/*
 * Copyright (C) 2014 ChangZhuo Chen

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <QApplication>
#include <QDebug>
#include <QFont>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QFont font("AR PL UMing TW", 12, 0, true);
    font.setUnderline(true);
    QApplication::setFont(font);

    QLabel x;

    x.setText("測試 ㄘㄜˋ ㄕˋ");

    x.show();

    qDebug() << "font.toString()" << font.toString();
    qDebug() << "x.font().toString()" << x.font().toString();

    return app.exec();
}
