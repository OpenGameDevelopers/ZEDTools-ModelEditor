#ifndef __ZEDTOOLS_MODELEDITOR_MAINWINDOW_H__
#define __ZEDTOOLS_MODELEDITOR_MAINWINDOW_H__

#include <QMainWindow>

class QAction;
class QMenu;

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	MainWindow( );
	~MainWindow( );

	int Initialise( );

private:
	int CreateActions( );
	int CreateMenus( );
	
	QAction	*m_pQuitAction;
	QMenu	*m_pFileMenu;
};

#endif // __ZEDTOOLS_MODELEDITOR_MAINWINDOW_H__

