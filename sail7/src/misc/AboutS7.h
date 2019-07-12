/****************************************************************************

	AboutS7 Class
	Copyright (C) 2008 Andre Deperrois 

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*****************************************************************************/

#ifndef AboutS7_H
#define AboutS7_H

#include <QDialog>
#include <QLabel>

class AboutS7 : public QDialog
{
    Q_OBJECT

public:
	explicit AboutS7(void *parent = 0);


private:
	void SetupLayout();

	void *m_pMainFrame;
};

#endif // AboutS7_H
