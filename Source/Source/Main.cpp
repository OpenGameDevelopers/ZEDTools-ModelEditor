#include <QApplication>
#include <MainWindow.h>

int main( int p_Argc, char **p_ppArgv )
{
	QApplication MainApplication( p_Argc, p_ppArgv );

	MainWindow Window;

	if( Window.Initialise( ) != 0 )
	{
		return 1;
	}

	Window.show( );

	return MainApplication.exec( );
}

