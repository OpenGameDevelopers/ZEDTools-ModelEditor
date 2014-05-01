#include <MainWindow.h>
#include <cstring>
#include <GitVersion.h>
#include <QAction>
#include <QMenuBar>

MainWindow::MainWindow( )
{
}

MainWindow::~MainWindow( )
{
}

int MainWindow::Initialise( )
{
	this->CreateActions( );
	this->CreateMenus( );

	char Title[ 1000 ];
	memset( Title, '\0', sizeof( Title ) );
	sprintf( Title, "ZED Model Editor [%s] %s //Build date: %s%s",
		GIT_BUILD_VERSION, GIT_COMMITHASH, GIT_COMMITTERDATE,
#if defined BUILD_DEBUG
		" [DEBUG]"
#else
		""
#endif // BUILD_DEBUG
		);
	setWindowTitle( tr( Title ) );
	setMinimumSize( 640, 480 );
	resize( 1024, 768 );

	return 0;
}

int MainWindow::CreateActions( )
{
	m_pQuitAction = new QAction( tr( "&Quit" ), this );
	m_pQuitAction->setShortcuts( QKeySequence::Quit );
	connect( m_pQuitAction, SIGNAL( triggered( ) ), this, SLOT( close( ) ) );

	return 0;
}

int MainWindow::CreateMenus( )
{
	m_pFileMenu = menuBar( )->addMenu( tr( "&File" ) );
	m_pFileMenu->addAction( m_pQuitAction );

	return 0;
}

