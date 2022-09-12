///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "/home/kevin/mxe/usr/i686-w64-mingw32.static/include/wx-3.1/wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include </home/kevin/mxe/usr/i686-w64-mingw32.static/include/wx-3.1/wx/wx.h>
#endif //WX_PRECOMP

#include "GUIFrame.h"

///////////////////////////////////////////////////////////////////////////

GUIFrame::GUIFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	mbar = new wxMenuBar( 0 );
	fileMenu = new wxMenu();
	wxMenuItem* menuFileQuit;
	menuFileQuit = new wxMenuItem( fileMenu, idMenuQuit, wxString( wxT("&Quit") ) + wxT('\t') + wxT("Alt+F4"), wxT("Quit the application"), wxITEM_NORMAL );
	fileMenu->Append( menuFileQuit );

	mbar->Append( fileMenu, wxT("&File") );

	helpMenu = new wxMenu();
	wxMenuItem* menuHelpAbout;
	menuHelpAbout = new wxMenuItem( helpMenu, idMenuAbout, wxString( wxT("&About") ) + wxT('\t') + wxT("F1"), wxT("Show info about this application"), wxITEM_NORMAL );
	helpMenu->Append( menuHelpAbout );

	mbar->Append( helpMenu, wxT("&Help") );

	this->SetMenuBar( mbar );

	statusBar = this->CreateStatusBar( 2, wxSTB_SIZEGRIP, wxID_ANY );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	fileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ), this, menuFileQuit->GetId());
	helpMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ), this, menuHelpAbout->GetId());
}

GUIFrame::~GUIFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );

}

LoginDLG::LoginDLG( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 0, 2, 0, 0 );

	EmailLBL = new wxStaticText( this, wxID_ANY, wxT("E-Mail"), wxDefaultPosition, wxDefaultSize, 0 );
	EmailLBL->Wrap( -1 );
	gSizer1->Add( EmailLBL, 0, wxALL, 5 );

	EmailTXT = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( EmailTXT, 0, wxALL, 5 );

	PasswordLBL = new wxStaticText( this, wxID_ANY, wxT("Password"), wxDefaultPosition, wxDefaultSize, 0 );
	PasswordLBL->Wrap( -1 );
	gSizer1->Add( PasswordLBL, 0, wxALL, 5 );

	PasswordTXT = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( PasswordTXT, 0, wxALL, 5 );

	RegisterBTN = new wxButton( this, wxID_ANY, wxT("Register"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( RegisterBTN, 0, wxALL, 5 );

	LoginBTN = new wxButton( this, wxID_ANY, wxT("Login"), wxDefaultPosition, wxDefaultSize, 0 );

	LoginBTN->SetDefault();
	gSizer1->Add( LoginBTN, 0, wxALL, 5 );


	this->SetSizer( gSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	LoginBTN->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( LoginDLG::LoginBTNOnLeftDown ), NULL, this );
}

LoginDLG::~LoginDLG()
{
	// Disconnect Events
	LoginBTN->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( LoginDLG::LoginBTNOnLeftDown ), NULL, this );

}
